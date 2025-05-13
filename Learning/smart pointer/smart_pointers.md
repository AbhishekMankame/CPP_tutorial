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

### 2. 🤝 `std::shared_ptr`
- Multiple smart pointers can share the ownership.
- The object is destroyed when the last `shared_ptr` pointing to it is destroyed.
<pre>
#include< iostream >
#include< memory >
int main(){
    std::shared_ptr< int > p1 = std::make_shared< int >(20);
    std::shared_ptr< int > p2 = p1; // shared ownership
    std::cout<< *p1 <<"," << p2 << std::endl;
    std::cout<< "Use count: "<< p1.use_count() << std::endl;
    return 0;
}
</pre>

### 3. `std::weak_ptr`
- Doesn't increase the reference count.
- Useful to avoid circular references (e.g. in graphs or trees)
<pre>
#include< iostream >
#include< memory >

int main(){
    std::shared_ptr< int > sp = std::make_shared< int >(100);
    std::weak_ptr< int > wp = sp;

    if(auto temp = wp.lock()){
        std::cout<< "Value: " << *temp << std::endl;
    }
    else {
        std::cout<< "Object expired\n";
    }
}
</pre>