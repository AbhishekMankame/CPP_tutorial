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