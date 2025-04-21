## What is Time Complexity?
Time complexity describes how the run time of an algorithm grows with respect to the input size n.

#### Common time complexities (from best to worst):
| Notation   | Name           | Examples                         |
| ---------- | -------------- | -------------------------------- |
| O(1)       | Constant       | Accessing an element in an array |
| O(log n)   | Logarithmic    | Binary Search                    |
| O(n)       | Linear         | Loop through array               |
| O(n log n) | Linearithmic   | Merge Sort, Heap Sort            |
| O(n^2)     | Quadratic      | Bubble Sort, Insertion Sort      |
| O(2^n)     | Exponential    | Solving Tower of Hanoi of Hanoi  |
| O(n!)      | Factorial      | Brute-force solution for Travelling Salesman |

### Let's talk about O(log log n) Complexity
- Here time grows with the logarithm of the logarithm of the input size n.
- Very slow growth rate - even for large n, log log n remain small.

#### Quick Comparison Table
| n | log2(n) | log2(log2(n)) |
| - | ------- | ------------- |
| 2 | 1 | 0 |
| 4 | 2 | 1 |
| 16 | 4 | 2 |
| 256 | 8 | 3 |
| 65536 | 16 | 4 |
| 4294967296 (=2^32) | 32 | 5 |

Even for billions, log log n is around 5

#### When does O(log log n) happen?
It appears in:
- Advanced data structures like van Emde Boas trees.
- Integer-based algorithms where numbers are repeatedly halved.
- Some primality tests, such as the AKS primality test.
- Hash table operations with double hashing (in some cases).
- Sometimes in optimized Union-Find path compressed (amortized).


