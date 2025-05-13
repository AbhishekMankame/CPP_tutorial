## 🧨 Unsafe Pointers in C++
Unsafe pointers are pointers that can lead to undefined behavior, crashes, or security vulnerabilities if used incorrectly.

### 🧠 Why Learn This?
- To avoid silent memory corruption
- To become a better debugger
- To understand why smart pointers were invented

### 🔍 % Types of Unsafe Pointers
| Name | Description | Example |
| ---- | ----------- | ------- |
| 1. Null Pointer | Points to nothing (`nullptr`) | `int* p = nullptr;`|
| 2. Dangling Pointer | Points to memory that has been freed or gone | `delete p; *p = 5;` |
| 3. Uninitialized Pointer | Declared but not assigned - contains garbage | `int* p; *p = 42;` |
| 4. Wild Pointer | A pointer with a garbage or invalid address | `int* = (int*)0xDEADBEEF` |
| 5. Memory Leak | Not unsafe in use, but you lost access to memory | `int* p = new int(5); p = nullptr;` |

### 1. 🕳️ Null Pointer
🔸What it is:<br>
Pointer with value `nullptr`. It points to nothing.
<pre>
int* p = nullPtr;

if(p) {
    std::cout << *p; // Safe: this won't run
}
</pre>
❌ Unsafe if you try to dereference:
<pre>
int* p = nullptr;
std::cout << *p; // ❌ Crash: segmentation fault
</pre>
✅ Best Practice:<br>
Always initilize pointers to `nullptr` until assigned.

