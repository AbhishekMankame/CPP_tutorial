## 🧠 1. What is a Memory Leak?
🔸Definition:<br>
A memory leak happens when a program allocates memory on the heap using `new` (or `malloc`) but fails to release it using `delete` (or `free`).
### What Happens:
- The memory is reserved, but the program loses all reference to it.
- Since there's no way to access or free it anymore, it just sits there wasting memory.
- Over time, this can exhaust system memory, leading to crashes or slowdowns - especially in long-running applications like servers or games.

### ✅ Example:
<pre>
void memoryLeakExample(){
    int* ptr = new int(42); // memory allocated to heap
    // Oops!! We forgot to delete it.
}
</pre>
🔴 Problem: `delete ptr;` is missing. So this 4 bytes of memory is leaked.