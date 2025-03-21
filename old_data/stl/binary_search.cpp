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

*/

int main(){
    
}