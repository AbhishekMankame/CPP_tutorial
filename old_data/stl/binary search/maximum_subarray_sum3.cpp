#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maximumSubarraySum(int arr[], int n){
    int cs=0,ms=INT_MIN;
    for(int i=0;i<n;i++){
        cs+=arr[i];
        
        ms=max(ms,cs);
        if(cs<0){
            cs=0;
        }
    }

    return ms;
}



int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    cout<<maximumSubarraySum(arr,n)<<endl;

    return 0;
}