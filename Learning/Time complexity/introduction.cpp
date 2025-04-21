#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// Time complexity: It describes how the runtime of an algorithm grows with respect to the input size n. 

// Constant - O(1) --> Does not grow with input size

int getFirstElement(int arr[]){
    return arr[0]; // Always one operation
}

// O(log n) - Logarithmic Time --> Input size reduces by half every step (e.g. binary search)

int binarySearch(int arr[], int n, int target){
    int left=0,right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target)    left = mid+1;
        else right = mid-1;
    }
    return -1;
}