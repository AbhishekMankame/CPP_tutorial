## 🧠 What Is a Pointer?
A pointer is a special variable that holds the memory address of another variable.<br>
Think of memory as a row of mailboxes. Each mailbox has an address. A pointer tells you which mailbox (i.e., memory location) to look in.

### 1. 🔸Declaring and Using Pointers
<pre>
int x = 42;
int *p = &x; // p holds the adddress of x
</pre>
Breakdown:
- `x` is a normal integer.
- `&x` gives the address of `x`.
- `int *p` declares a pointer to an integer.
- Now `p` stores the address of `x`. 

### Accessing the Value
<pre>
std::cout<< *p; // prints 42
</pre>
- `*p` is the dereference operator.
- It means: "go to the address stored in `p` and get the value there."

### 🔸2. Visual Diagram (Imagine This)
<pre>
x = 42
Address of x (say): 0x1234

p = &x  -> p holds 0x1234
*p = 42 -> dereferencing p gives the value 42
</pre>

### 🔸3. Modifying Values Through Pointers
<pre>
*p = 100;
std::cout<< x; // now x is 100
</pre>
- Changing `*p` actually changes `x`, since `p` points to `x`.

### 🔸4. Dynamic Memory: `new` and `delete`
Unlike stack variables, dynamic memory is allocated from the heap using `new`.
<pre>
int* p = new int(25); // dynamically allocate an int with value 25
std::cout << *p; // prints 25
delete p; // free memory
</pre>
🔥You must call `delete` to free the memory. Otherwise, it causes a memory leak.

### 🔸5. Commom Mistakes
❌ Memory Leak
<pre>
int* p = new int(50);
// forgot to delete
</pre>
- Every time this code runs, memory is consumed and never released.<br>

❌ Dangling Pointer
<pre>
int* p = new int(30);
delete p; // memory is freed
*p = 99; // ❌ undefined behavior - you're writing to deleted memory!
</pre>
❌ Double Delete
<pre>
int* p = new int(70);
delete p;
delete p; // ❌ crash or undefined behavior
</pre>

### 🔸6. `nullptr` in Modern C++
- Before C++11: we used `NULL` or `0` to indicate a pointer isn't pointing to anything.
- Now: use `nullptr`
<pre>
int* p = nullptr;
</pre>
It's type-safe and preferred.

### 🔸7. Pointer to Pointer
You can have a pointer that points to another pointer:
<pre>
int x = 10;
int* p = &x;
int** pp = &p;
std::cout << **pp; // prints 10
</pre>

### 🔸8. Pointers and Arrays
Arrays and pointers are closely related in C++:
<pre>
int arr[3] = {1, 2, 3};
int* p = arr; // points to arr[0]
std::cout << *(p+1); // prints 2
</pre>