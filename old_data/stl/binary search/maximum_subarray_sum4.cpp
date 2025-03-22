#include<iostream>
#include<vector>
using namespace std;

int maximumSubarraySum(int arr[], int n){

    // all negative elements
    bool allNeg = true;
    int largest = INT_MIN;

    for(int i=0;i<n;i++){
        if(i>0){
            allNeg = false;
        }
        largest = max(largest,i);
    }
    // Special case
    if(allNeg){
        return largest;
    }

    // Kadane's logic
    int cs=0;
    int ans=0;
    for(int i=0;i<n;i++){
        cs=cs + arr[i];
        if(cs<0){
            cs=0;
        }
        ans=max(ans,cs);
    }

    return ans;
}

int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    cout<<maximumSubarraySum(arr,n)<<endl;

    return 0;
}