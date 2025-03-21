#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;

// Binary Search Algorithm
// Binary search algorithm is a searching algoritm used in a sorted array by repeatedly dividing the search interval in half. The idea of bindary search is to use the information
// that the array is sorted and reduce the time complexity to O(log N)

/* Conditions to apply Binary Search Algorithm in a Data Structure
--> The data structure must be sorted
--> Access to any element of the data structure should take constant time

*Binary Search Algorithm steps:
--> Divide the search space into two halves by finding the middle index "mid"
--> Compare the middle element of the search space with the key
--> If the key is found at the middle element, the process is terminated
--> If the key is not found at middle element, choose which half will be used as the next search space
    --> If the key is smaller than the middle element, then the left side is used for next search
    --> If the key is larger than the middle element, then the right side is used for next search
--> This process is continued until the key is found or the total search space is exhausted. 

Binary search can be implemented in two ways
1. Iterative approach
2. Recursive approach

Iterative approach
Time complexity --> O(log N)
Auxiliary space --> O(1)

Recursive approach
Time complexity
    Best case: O(1)
    Average case: O(log N)
    Worst case: O(log N)

Auxiliary space: O(1). If the recursive call stack is considered then the auxiliary spacce will be O(log N)

*/

int main(){
    
}

/* Applications of Binary Search
--> Binary search can be used as a building block for more complex algorithms used in machine learning, such as algorithms for training neural networks or finding the optimal hyperparameters for a model.
--> It can be used for searching in computer graphics such as algorithms for ray tracing or texture mapping.
--> It can be used for searching a database.
*/

/* Advantages of Binary Search
--> Binary search is faster than linear search, especially for large arrays.
--> More efficient than other searching algoritms with a similar time complexity, such as interpolation search or exponentila search.
--> Binary search is well-suited for searching large datasets that are stored in external memory, such as one a hard drive or in the cloud.

*/

/* Disadvantages of Binary Search
--> The array should be sorted.
--> Binray search requires that the data-structure being searched be stored in contiguous memory locations.
--> Binary search requires that the element of the array be comparable, meaning that they must be able to be ordered.

*/