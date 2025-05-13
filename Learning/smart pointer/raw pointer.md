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

### 🧠 Key Characteristics of Raw Pointers
| Feature | Behavior |
| ------- | -------- |
| Type | `T*` (e.g., `int*`, `double*`, `MyClass*`) |
| Ownership | ❌ No ownership tracking - you manage the memory |
| Memory management | ❌ You must manually use `new` and `delete` |
| Safety | ❌ Prone to memory leaks, dangling pointers |
| Null state | Can be `nullptr` or `NULL` |
| Performance | ✅ Very lightweight - no runtime overhead |

### 🔥Dangers of Raw Pointers
1. Forgetting to delete -> memory leaks
2. Delete twice -> crash
3. Dereferencing null or dangling pointer -> undefined behavior

### ✅ Use Cases (when raw pointers are okay)
- Pointing to stack variables:
<pre>
int a = 5;
int* p = &a;
</pre>
- Passing large data without copying (e.g., function parameters):
<pre>
void print(int* p){
    std::cout << *p;
} </pre>
- When you don't own the memory (e.g., accessing a buffer, array, etc)