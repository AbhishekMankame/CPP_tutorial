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

// O(n) - Linear Time --> Time grows linearly with n

int sum(int arr[], int n){
    int s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    return s;
}

// O(nlogn) - Linearithmic Time --> Efficient sorting algorithms fall here
// Eg: Merge sort
void merge(int arr[], int l, int m, int r){
    // Merge two halves
    // O(n) for merging
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int m=(l+r)/2;
        mergeSort(arr,l,m); //O(log n)
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);  // O(n)
    }
}
