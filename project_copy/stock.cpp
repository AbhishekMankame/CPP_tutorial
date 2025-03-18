#include <iostream>
#include <queue>
#include <unordered_map>
#include <mutex>
#include <thread>
#include <vector>

struct Order {
    double price;
    int quantity;
    std::string orderId;
    bool isBuyOrder; // true -> buy, false -> sell
    
    // Comparator for max heap (Buy Orders)
    bool operator<(const Order& other) const {
        return isBuyOrder ? price < other.price : price > other.price;
    }
};

class OrderBook {
private:
    std::priority_queue<Order> buyOrders;  // Max heap for bids
    std::priority_queue<Order> sellOrders; // Min heap for asks
    std::mutex bookMutex;

public:
    void addOrder(const Order& order) {
        std::lock_guard<std::mutex> lock(bookMutex);
        if (order.isBuyOrder) {
            buyOrders.push(order);
        } else {
            sellOrders.push(order);
        }
        matchOrders();
    }
    
    void matchOrders() {
        while (!buyOrders.empty() && !sellOrders.empty()) {
            Order buy = buyOrders.top();
            Order sell = sellOrders.top();
            
            if (buy.price >= sell.price) { 
                executeTrade(buy, sell);
                buyOrders.pop();
                sellOrders.pop();
            } else {
                break; // No match possible
            }
        }
    }
    
    void executeTrade(const Order& buy, const Order& sell) {
        int tradedQuantity = std::min(buy.quantity, sell.quantity);
        std::cout << "Trade executed: " << tradedQuantity << " @ " << sell.price << std::endl;
    }
};

int main() {
    OrderBook orderBook;
    orderBook.addOrder({100.5, 10, "O1", true}); // Buy order
    orderBook.addOrder({101.0, 5, "O2", false}); // Sell order
    orderBook.addOrder({100.5, 7, "O3", true}); // Buy order
    orderBook.addOrder({100.2, 8, "O4", false}); // Sell order
    return 0;
}
