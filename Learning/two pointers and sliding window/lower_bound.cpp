/*Lower Bound
Given an array of integers A (sorted) amd a integer Val.
Implememt a function that takes A and Val as input parameters and returns the lower bound of Val. 
Note: If Val is not present in array then Lower bound of a given integer means integer which is just smaller than given integer. 
Otherwise Val itself is the answer.
If Val is less than smallest element of array A then return -1 in that case. 

Example1: 
A = {-1, -1, 2, 3, 5} Val = 4
Answer: 3
Since 3 is just smaller than 4 in the array.

Example 2:
A = {1, 2, 3, 4, 6} Val = 4
Answer: 4
Since 4 is equal to 4.

*/

// Note: Here as array is sorted we will use modified version of binary search

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int lowerBound(vector<int> A, int Val){
    int s = 0;
    int e = A.size() - 1;
}