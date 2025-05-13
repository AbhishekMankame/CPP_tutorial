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