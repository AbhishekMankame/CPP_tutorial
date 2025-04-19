# What is meant by Algorithm Analysis?
Algorithm analysis is an important part of computational complexity theory, which provides theoretical estimation for the required resources of an algorithm to solve a specific computational problem. Analysis of algorithms is the determination of the amount of time and space resources to execute it.

## Why Analysis of Algorithms is Important?
1. To predict the behaviour of an algorithm without implementing it on a specific computer.
2. It is much more convenient to have simple measures for the efficiency of an algorithm than to implement the algorithm and test the efficiency every time a certain parameter in the underlying system changes. \
3. It is impossible to predict the exact behaviour of an algorithm. There are too many influencing factors.
4. The analysis is thus only an approximation; it is not perfect.
5. More importantly, by analyzing different algorithms, we can compare them to determine the best one for our purpose.

Types of Algorithm Analysis:
1. Best case
2. Worst case
3. Average case

### Introduction to Asymptotic Analysis
Asymptotic analysis is a way to evaluate the performance of an algorithm by focusing on its growth rate as the input size (n) becomes very large. It ignores:
- Machine-dependent constants (eg. hardware speed).
- Programming language differences.
- Smaller terms become insignificant for large inputs.
Instead, it focuses on the big picture: how the algorithm scales with input size.