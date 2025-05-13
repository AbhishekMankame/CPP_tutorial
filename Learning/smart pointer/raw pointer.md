## 🧵What is a Raw Pointer in C++?
A raw pointer is the traditional pointer in C++ - a bare memory address that can point to any type of object or function.
### 👉Definition:
<pre>
int* p; // raw pointer to an integer
</pre>
- It just stores the memory address of another variable or object.
- It doesn't manage memory automatically. You must manually `new` and `delete`.