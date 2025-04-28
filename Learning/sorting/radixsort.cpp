#include<iostream>
using namespace std;

 // Function to get the maximum value of the array
 int getMax(int arr[], int n){
    int maxi = arr[0];
    for(int i=1; i<n;i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
 }

 // A function to do Counting Sort based on the digit represented by exp
 void countingSort(int arr[], int n, int exp){
    int output[n]; // output array
    int count[10] = {0}; // count array for digits 0-9

    // Step 1: Count occurences of digits
    for(int i=0; i<n; i++){
        int digit = (arr[i]/exp)%10;
        count[digit]++;
    }

    // Step 2: Change count[i] so that it contains actual position of this digit
    for(int i=1; i<10; i++){
        count[i]+=count[i-1];
    }

    // Step 3: Build the output array (stable sort)
    for(int i=n-1; i>=0; i--){
        int digit = (arr[i]/exp)%10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    // Step 4: Copy the output array to arr
    for(int i=0; i<n;i++){
        arr[i] = output[i];
    }
 }