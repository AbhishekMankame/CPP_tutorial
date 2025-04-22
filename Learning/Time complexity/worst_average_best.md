## Worst, Average and Best Case Time Complexities
It is important to analyze an algorithm after writing it to find it's efficiency in terms of time and space in order to improve it if possible.
When it comes to analyzing algorithms, the asymptotic analysis seems to be the best way possible to do so. This is because asymptotic analysis analyzes algorithms in terms of the input size.
We can have three cases to analyze an algorithm:
1. Worst Case
2. Average Case
3. Best Case

#### Worst Case Analysis (Ususally Done):
In the worst case analysis, we calculate upper bound on running time of an algorithm. We must know the case that causes the maximum number of operations to be executed. For Linear Search, the worst case happens when the element to be searched is not present in the array. When x is not present, the search() functions compares it with all the elements of arr[] one by one. Therefore, worst case time complexity of linear search would be O(N), where N is the number of elements in the array.