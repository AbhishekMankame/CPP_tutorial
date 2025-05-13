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