#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    //Brute Force Approach where time complexity will be O(n^2)

    vector<int> result;
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                result.push_back(i);
                result.push_back(j);
                
            }
        }
    }
    return result;
}

int main(){
    vector<int> nums={2,7,11,15};
    int n=nums.size();
    int target=9;
    vector<int> result=pairSum(nums,target);
    cout<<result[0]<<","<<result[1]<<endl;

    return 0;
}