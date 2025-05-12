#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Special case of Kadane Algorithm:
// There is a possibility that all the element of array can be negative.
// In that case we need to return the smallest negative number as the output
/*Example:
-3, -2, -1, -5, -4
Output: -1
*/

int maxSubarray(vector<int> A){
    // All negative elements
    bool allNeg = true;
    int largest = INT_MIN;

    for(int x : A){
        if(x > 0){
            allNeg = false;
        }
        largest = max(largest,x);
    }

    // Special Case
    if(allNeg){
        return largest;
    }
}