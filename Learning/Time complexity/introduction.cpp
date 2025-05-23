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

// O(n^2) - Quadratic Time --> Usually nested loops - becomes slow for large n. 
void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
}

// O(2^n) - Exponential Time --> Solves problems by trying all combinations (brute-force)
// E.g., Fibonacci Examples (recursive):
int fib(int n){
    if(n<=1) return n;
    return fib(n-1) + fib(n-2);
}

// O(n!) - Factorial Time --> Used in permutations and NP problems
// Generate all permutations:
void permute(string s, int l, int r){
    if(l==r){
        cout<<s<<endl;
    }
    else{
        for(int i=l;i<=r;i++){
            swap(s[l],s[i]);
            permute(s,l+1,r);
            swap(s[l],s[i]); // backtrack
        }
    }
}

// O(log log n) --> Here time grows with the logarithm of the logarithm of the input size n. 
// very slow growth rate - even for large n, log log n remains small.

int countSteps(int n){
    int steps = 0;
    while(n>1){
        n=log2(n); // Take logarithm repeatedly
        steps++;
    }
    return steps;
}
