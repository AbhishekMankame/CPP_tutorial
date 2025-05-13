## 🧵What is a Raw Pointer in C++?
A raw pointer is the traditional pointer in C++ - a bare memory address that can point to any type of object or function.
### 👉Definition:
<pre>
int* p; // raw pointer to an integer
</pre>
- It just stores the memory address of another variable or object.
- It doesn't manage memory automatically. You must manually `new` and `delete`.

### 🔹Example:
<pre>
int x = 42;
int* ptr = &x;
std::cout << *ptr << std::endl; // Output: 42
</pre>
This `ptr` is a raw pointer.