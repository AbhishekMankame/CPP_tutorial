## 🧠 2. What is a Dangling Pointer?
🔸<b> Definition:</b><br>
A dangling pointer is a pointer that points to memory that has been deallocated or freed. Accessing this pointer is undefined behaviour - it can crash or return garbage. <br>
A dangling pointer points to memory that's no longer valid - either:
- Freed (via `delete`)
- Went out of scope (stack variable)
Accessing it = undefined behavior. <br>

✅ Example:
<pre>
int* p = new int(99);
delete ptr; // memory is deallocated
*ptr = 100; // ❌ undefined behavior (dangling pointer)
</pre>
- After `delete`, `ptr` still holds the same address
- But that address no longer belongs to us.
- Using it is like walking into a demolished house - dangerous and invalid.

### 🔥Common Scenarios for Dangling Pointers
🔹Case 1: Accessing after delete
<pre>
int* p = new int(5);
delete p;
std::cout<< *p; // ❌ dangling
</pre>
🔹Case 2: Returning address of a local variable
<pre>
int* giveDangling() {
    int x = 10;
    return &x; // ❌ x goes out of scope after function returns
}
</pre>
- x lives on the stack and is destroyed when the function ends.
### ✅ Fix:
Option 1: Set pointer to `nullptr` after delete:
<pre>
int* ptr = new int(88);
delete ptr;
ptr = nullptr; // safe - you can test for nullptr later
</pre>
Option 2: Use smart pointers! (They clea up automatically.)

### 🔥 Real-World Consequences:
| Problem | Description |
| ------- | ----------- |
| 💥Crashes | You might read/write into invalid memory, causing segmentation faults or access violations. |
| 🪲Silent data corruption | You could be modifying that another part of the program now owns - causing weird, random bugs |
| 🔐Security vulnerabilities | Attackers might exploit dangling pointers to run malicious code (common in buffer overflow exploits). |
| 🧩Hard-to-debug issues | The program might sometimes and crash later with no clear cause. |
| 🧪Undefined behavior | Literally anything can happen - overwrite important data, crash, or give wrong output. |

### 🧠Root Causes:
- Accessing memory after `delete`:
<pre>
int* p = new int(5);
delete p;
std::cout<< *p; // ❌ undefined behavior
</pre>

- Returning address of local variable:
<pre>
int* foo() {
    int x = 10;
    return &x; // ❌ x is destroyed when function ends
}
</pre>
- Using stale pointers in containers of arrays after resizing