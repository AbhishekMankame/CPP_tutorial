## Worst, Average and Best Case Time Complexities
It is important to analyze an algorithm after writing it to find it's efficiency in terms of time and space in order to improve it if possible.
When it comes to analyzing algorithms, the asymptotic analysis seems to be the best way possible to do so. This is because asymptotic analysis analyzes algorithms in terms of the input size.
We can have three cases to analyze an algorithm:
1. Worst Case
2. Average Case
3. Best Case

#### Worst Case Analysis (Ususally Done):
In the worst case analysis, we calculate upper bound on running time of an algorithm. We must know the case that causes the maximum number of operations to be executed. For Linear Search, the worst case happens when the element to be searched is not present in the array. When x is not present, the search() functions compares it with all the elements of arr[] one by one. Therefore, worst case time complexity of linear search would be O(N), where N is the number of elements in the array.

#### Average Case Analysis(Sometimes done):
In average case analaysis, we take all possible inputs and calculates computing time for all of the inputs. Sum of all the calculated values and divide the sum by total number of inputs. We must know (or predict) distribution of cases. For the linear search problems, let us assume that all cases are uniformly distributed (including the case of x not being present in array). So we sum all the cases and divide the sum by (N+1).

#### Best Case Analysis (Bogus):
In the best case analysis, we calculate lower bound on running time of an algorithm. We must know the case that causes minimum number of operations to be executed. In linear search problem, the best case occurs when x is present at the first location. The number of operations in the best case is constant (not dependent on N). So time complexity in the best case would be omega(1).

### Time Complexity Analysis: (In Big-O notation)
- Best Case: O(1), This will take placce if the element to be searched is on the first index of the given list. So, the number of comparisons, in this case, is 1.
- Average Case: O(n), This will take place if the element to be searched is on the middle index of the given list.
- Worst Case: O(n), this will take place if:
    - The element to be searched is on the last index.
    - The element to be searched is not present on the list.

### Important Points:
- Most of the times, we do the worst case analysis to analyze algorithms. In the worst case analysis, we guarantee an upper bound of the running time of an algorithm which is a good piece of information.
- The average case analysis is not easy to do in most of the practical cases and it is rarely done. In the average case analysis, we must know (or predict) the mathematical distribution of all possible inputs.
- The best case analysis is bogus. Guaranteeing a lower bound of an algorithm doesn't provide any information as in the worst case, an algorithm may take years to run.