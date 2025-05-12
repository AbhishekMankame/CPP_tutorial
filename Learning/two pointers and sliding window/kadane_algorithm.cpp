#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int largestSubarraySum(int arr[], int n){
    int cs=0;
    int ls=0;
    for(int i=0;i<n;i++){
        cs = cs + arr[i];
        if(cs<0)    cs=0;
        ls = max(ls,cs);
    }

    return ls;
}

int main(){
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    cout << largestSubarraySum(arr,n)<<endl;
}

// Time Complexity: O(n)
// Space Complexity: O(1)