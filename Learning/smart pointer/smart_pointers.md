## 🧠 What are Smart Pointers?
In C++, smart pointers are wrappers around raw pointers that automatically manage memory. When the smart pointer goes out of scope, it automatically deletes the object it points to-saving you from the `delete` and prevent memory leaks.<br>
They live in the `<memory>` header.

### 🧾Types of Smart Pointers in C++
There are 3 main types:<br>
| Smart Pointer | Purpose | Ownership Model |
| ------------- | ------- | --------------- |
| `std::unique_ptr` | Exclusive ownership | Only one owner allowed |
| `std::shared_ptr` | Shared ownership | Multiple owners allowed |
| `std::weak_pointer` | Non-owning observer | Used with `shared_ptr` to break cycles |

### 1. 🔐 `std::unique_ptr`
- Only one smart pointer can own the object at a time.
- Automatically deletes the object when it goes out of scope.
- Cannot be copied (but can be moved).
<pre>
#include<`iostream`>
#include<`memory`>

int main(){
    std::unique_ptr<`int`> ptr = std::make_unique<`int`>(10);
    std::cout<<*ptr<< std::endl;
    return 0; // memory is automatically freed
}
</pre>