## Big O Notation
We can express algorithmic complexity using the big-O-notation. For a problem of size N:
- A constant-time function/method is "order 1": O(1)
- A linear-time function/method is "order N": O(N)
- A quadratic-time function/method is "order N sqaured": O(N^2)

**Definition**: Let g and f be functions from the set of natural numbers to itself. The function f is said to be O(g) (read big-oh of g), if there is a constant c > 0 and a natural number n0 such that f(n) <= cg(n) for all n >= n0.