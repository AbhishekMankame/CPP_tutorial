#include<iostream>
using namespace std;
typedef long long int ll;

int binarySearchIterative(int arr[], int n, int target){
    int low=0,high=n-1;

    while(low<=high){
        int mid=low + (high - low)/2; // to avoid overflow
        if(arr[mid]==target)
            return mid; // found
        else if(arr[mid]<target)
            low = mid+1; // search right
        else
            high=mid-1;  // search left
    }
    return -1; // not found
}

int binarySearchRecursive(int arr[], int low, int high, int target){
    if(low>high){
        return -1;  // base case: not found
    }
    int mid = low + (high + low)/2;
    if(arr[mid]==target)
        return mid;
    else if(arr[mid]<target)
        return binarySearchRecursive(arr,mid+1,high,target);
    else
        return binarySearchRecursive(arr,low,mid-1,target);
}