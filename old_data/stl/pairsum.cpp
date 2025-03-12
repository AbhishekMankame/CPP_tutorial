#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums={2,7,11,15};
    int n=nums.size();
    int target=9;
    vector<int> result;

    //Brute Force Approach where time complexity will be O(n^2)
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                cout<<i<<" "<<j<<endl;
            }
        }
    }

}