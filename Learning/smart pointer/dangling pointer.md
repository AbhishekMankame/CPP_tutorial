## 🧠 2. What is a Dangling Pointer?
🔸<b> Definition:</b><br>
A dangling pointer is a pointer that points to memory that has been deallocated or freed. Accessing this pointer is undefined behaviour - it can crash or return garbage. <br>
✅ Example:
<pre>
int* p = new int(99);
delete ptr; // memory is deallocated
*ptr = 100; // ❌ undefined behavior (dangling pointer)
</pre>
- After `delete`, `ptr` still holds the same address
- But that address no longer belongs to us.
- Using it is like walking into a demolished house - dangerous and invalid.