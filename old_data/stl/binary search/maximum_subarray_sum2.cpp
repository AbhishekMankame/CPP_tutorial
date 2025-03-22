#include<iostream>
#include<vector>
#include<vector>
using namespace std;

// Maximum subarray sum --> Using prefix sum approach

int largestSubarrySum(int arr[], int n){

    // Prefix sums --> We are here making one array for prefix sum
    int prefix[n]={0};
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){  // Note: Here we have started the loop from i=1 not i=0
        prefix[i]=prefix[i-1]+arr[i];
    }

    // largest sum logic
    int largesSum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int subarraySum= i>0 ? prefix[j]-prefix[i-1]:prefix[j];
            largesSum=max(largesSum,subarraySum);

        }
    }
    return largesSum;
}

int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);

    cout<<largestSubarrySum(arr,n)<<endl;


    return 0;

}