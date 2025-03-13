#include<iostream>
#include<vector>
using namespace std;

// Brute force approach
// Yaha par saare ke saare elements ka frequency nikalte hai, then jis bhi element ki frequency n/2 se jyada hogi, woh element final answer ho jaayega

int majorityElement(vector<int>& nums){
    int n=nums.size();
    int freq=0;
    for(int val:nums){
        for(int el:nums){
        if(val==el){
            freq++;
        }
        if(freq>n/2){
            return val;
        }
    }
}
    return -1;
}


int main(){
    vector<int> nums={2,2,1,1,1,2,2};
    cout<<majorityElement(nums)<<endl;
}