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

### 2. 💀 Dangling Pointer
🔸 What it is: <br>
Pointer that points to memory no longer valid (freed or out-of-scope).
<pre>
int* p = new int(10);
delete p;
*p = 99; // ❌ Dangling: memory was already deleted!
</pre>

🧨 Dangerous Because:
- You're modifying memory you no longer own.
- May corrupt other data.

✅ Best Practice:<br>
Set pointer to `nullptr` after deleting:
<pre>
delete p;
p = nullptr;
</pre>

### 3. 🪦 Uninitialized Pointer
🔸What it is: <br>
Pointer declares but never assigned - contains random garbage address.
<pre>
int* p;
*p = 50; // ❌ Unpredictable crash
</pre>
🧨 Problem:<br>
You don't know where it's pointing. Could corrput memory.
✅ Best practice: <br>
Always initialize pointers:
<pre>
int* p = nullptr;
</pre>

### 4. 🕷️ Wild Pointer
🔸What it is:<br>
A pointer that points to invalid memory - often hardcoded or corrputed.
<pre>
int* p = (int*)0xDEADBEFE; // ❌ Wild and totally invalid
</pre>
🔥 Use case (only valid in OS/hardware dev), but never in application-level code. <br>
🧨 Crash if deferenced.

### 5. 💧 Memory Leak (Lost Pointer)
🔸What it is:<br>
You allocated memory with `new`, but lost all access to it (overwritten, reassigned, or went out of scope).
<pre>
int* p = new int(10);
p = nullptr; // ❌ Memory leaked - no way to `delete` now </pre>

✅ Best Practice:
- Use smart pointers (`unique_ptr`, `shared_ptr`)
- Carefully manage ownership and always `delete` what you `new`

### 🔐 Summary Table
| Type | What Happens | Safe Practice |
| ---- | ------------ | ------------- |
| Null Pointer | Crash on dereference | Check with `if (p != nullptr)` |
| Dangling Pointer | Undefined behavior, crashes | Set to `nullptr` after `delete` |