#include<iostream>
#include<vector>
using namespace std;

// Maximum subarray sum -- using Brute Force Approach

void largestSubarraySum(int arr[],int n){
    //int curSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int curSum=0;
            for(int k=i;k<=j;k++){
                curSum=curSum+arr[k];
            }
            maxSum=max(maxSum,curSum);
        }
    }
    cout<<"Largest Subarray sum for the given array is: "<<maxSum<<endl;
}

int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    largestSubarraySum(arr,n);

    return 0;
}

// Note: This is a brute force approach, here we are trying all the possible subarrays with the O(N^3) time