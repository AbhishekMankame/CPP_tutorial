#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


/* Product of Array Except Self
This is leetcode question 238. Given an integer array nums, return an array answer such that answer is equal to the product of all the elements of nums except nums[i].
Note: Here, we are not allowed to use division operation. 
Constraints: 2 <=nums.lenth <= 10^5, -30 <= nums[i] <= 30

*/

// Let us solve this using brute force approach

vector<int> productExceptSelf(vector<int>& nums){
    int n = nums.size();
    vector<int> ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                ans[i] *=nums[j];
            }
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {1,2,3,4};
    int n=nums.size();
    vector<int> ans = productExceptSelf(nums);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}