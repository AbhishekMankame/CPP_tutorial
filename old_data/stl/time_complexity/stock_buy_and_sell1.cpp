#include<iostream>
#include<vector>
using namespace std;

/*Stock Buy and Sell 1
This is leetcode problem: 121. Best time to buy and sell stock
Here we are given an array prices where prices[i] is the price of a given stock on the ith day.
We need to find the maximum profit that can be obtained by buying and selling the stock once.
If we have no profit, we need to return 0.

Constraints:
1. 1<=prices.length<=10^5
2. 0<=prices[i]<=10^4

*/

// Let's code it!!!!!

int maxProfit(vector<int>& prices){
    int maxP=0, bestBuy=prices[0];

    for(int i=0;i<prices.size();i++){
        if(prices[i]>bestBuy){
            maxP=max(maxP, prices[i]-bestBuy);
        }
        bestBuy=min(bestBuy, prices[i]);
    }

    return maxP;
}

int main(){
    vector<int> prices={7,1,5,3,6,4};
    cout<<maxProfit(prices)<<endl;

    return 0;
}

// Let's discuss about the time complexity of this code:
// 1. We are iterating over the prices array once to find the maximum profit that can be obtained by buying and selling the stock once.
// 2. Hence, the time complexity of this code is O(N) where N is the size of the prices array.
// 3. Hence, the code is optimized and runs in linear time.

// Let's discuss about the space complexity of this code:
// 1. We are using only a few variables to store the maximum profit and the best buying price.
// 2. Hence, the space complexity of this code is O(1) --> Constant space complexity.