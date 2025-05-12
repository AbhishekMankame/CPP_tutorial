/*Pairs
Given an array containing N integers, and an number S denoting a target sum. 
Find two distinct integers that can pair up to form target sum. Let us assume there will be only one such pair. 
Input:
array = [10, 5, 2, 3, -6, 9, 11]
S = 4
Output: [10, -6]
*/

// Let's solve with Brute force approach
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {10, 5, 2, 3, -6, 9, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int s = 4;
    for(int i=0; i<n;i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] == s){
                cout<<"["<<arr[i]<<","<<arr[j]<<"]";
            }
        }
    }
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)