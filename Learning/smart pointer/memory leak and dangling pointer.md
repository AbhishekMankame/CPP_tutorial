## 🧠 1. What is a Memory Leak?
🔸<b>Definition:</b><br>
A memory leak happens when a program allocates memory on the heap using `new` (or `malloc`) but fails to release it using `delete` (or `free`).<br>
A memory leak occurs when memory is allocated (usually on the heap) but never released. The pointer to the memory is lost, and the memory can't be reused.

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

### 🚨Real Danger:
In loops or long-running apps, this adds up quickly:
<pre>
for(int i = 0; i < 1000000; i++){
    int* ptr = new int(i);
    // forgot delete
}
</pre>
This leaks millions of integers!

### ✅ Fix:
<pre>
int* ptr = new int(42);
delete ptr; // memory freed
</pre>

### 🔥Real-World Consequences:
| Problem | Description |
| ------- | ----------- |
| 🧠 Increasing RAM usage | Unused memory keeps piling up. Over time, the system runs out of RAM. |
| 🧯 Application crash | When the app tries to allocate more memory but none is available, it crashes (`std::bad_alloc` in C++) |
| 🐢 Slow performance | Swapping to disk (virtual memory) causes a major performance hit. |
| 🪲 Hard-to-detect bugs | Leak don't crash immediately - they build up silently over time. |
| ⚠️ OS instability | Critical software leaking memory can slow down or freeze the entire system. |
| 🔐 Security risk | Malicious attackers can exploit memory leaks to launch Denial of Service (DoS) attacks. |

### 🧠 Root Causes:
- Forgot to `delete` memory
- Early `return` in function skips `delete`
- Lost pointer (overwritten):
<pre>
int* ptr = new int(10);
ptr = new int(20); // original memory (10) is leaked
</pre>

### 📉 Example: Server That Leaks Memory
<pre>
void handleRequest() {
    int* data = new int[1000];
    // forgot delete[]
}
</pre>
If `handleRequest()` runs for every HTTP request, and each time leaks memory, the server will crash under load.

### 🧾 Summary Table
| Issue | When It Happens | Fix |
| ----- | --------------- | --- |
| Memory Leak | Memory allocated but never freed | Always `delete` what you `new` |
| Dangling Pointer | Accessing memory after it's deallocated | Don't use freed memory; set pointer to `nullptr` |