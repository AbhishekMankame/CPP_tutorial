#include<iostream>
#include<vector>
#include<bitset>
using namespace std;

/* Divide array into equal pairs
You are given an integer array nums consisting of 2*n integers.
You need to divide the array into n pairs such that:
--> Each element belongs to exactly one pair
--> The element present in a pair are equal

Return true if nums can be divided into n pairs, otherwuise return false.

*/

int main(){
    vector<int> nums={1,2,3,2,1,4,5,4,3,5};
    bitset<21> bi;
    for(int i:nums){
        bi.flip(i);
    }

    cout<<bi.none()<<endl;


    return 0;
}

// Let's analyze the time complexity of the code snippet:
// 1. The code snippet is using the bitset to solve the problem.
// 2. The code snippet is using the flip() and none() functions of the bitset, which takes constant 
// 3. Here we are iterating over the nums array to flip the bits of the bitset which takes O(n) time --> Linear time
// Hence, the time complexity of the code snippet is O(n) where n is the size of the nums array.

// Let's analyze the space complexity of the code snippet:
// 1. The code snippet is using the bitset to solve the problem.
// 2. Here we are using the bitset of size 21 to store the bits of the nums array.
// 3. Hence, the space complexity of the code snippet is O(1) --> Constant space complexity.