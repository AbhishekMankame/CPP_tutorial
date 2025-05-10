## 👹Ackermann Function - The Titan of Recursive Functions
### 🧠 What is it?
The Ackermann function is a super-recursive mathematical function that grows faster than any primitive recursive function. It's used to test the limits of recursion and to analyze algorithm efficiency - like in Disjoint Set Union, where its inverse shows up.

## 🧮 Definition: 
<pre>
A(m, n) = 
    n + 1   if m == 0
    A(m - 1, 1) if m > 0 and n == 0
    A(m - 1, A(m, n - 1))   if m > 0 and n > 0
</pre>