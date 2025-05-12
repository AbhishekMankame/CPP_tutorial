## 🧠 What are Smart Pointers?
In C++, smart pointers are wrappers around raw pointers that automatically manage memory. When the smart pointer goes out of scope, it automatically deletes the object it points to-saving you from the `delete` and prevent memory leaks.<br>
They live in the `<memory>` header.