#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Maximum frequency element using sorting approach
// Yaha par saare elements ko sort karke, phir ek ek karke check karte hai ki koi element n/2 se jyada baar aaya hai ya nahi
// Agar aaya hai toh woh element final answer ho jaayega

int majorityElement(vector<int>& nums){
    int n=nums.size(); int freq=1;
    int ans=nums[0];
    sort(nums.begin(), nums.end());
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            freq=1;
            ans=nums[i];
        }
        if(freq>n/2){
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int> nums={2,2,1,1,1,2,2};
    cout<<majorityElement(nums)<<endl;
    return 0;
}