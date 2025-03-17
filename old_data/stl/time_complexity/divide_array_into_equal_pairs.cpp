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