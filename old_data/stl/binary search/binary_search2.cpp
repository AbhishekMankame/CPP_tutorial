#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(vector<int>& arr, int target, int st, int end){
    if(st<=end){
        int mid=st+(end-st)/2;
        if(target>arr[mid]){
            return binarySearch(arr,target,mid+1,end);
        }
        else if(target<arr[mid]){
            return binarySearch(arr,target,st,mid-1);
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {-3,-1,0,4,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    int st=0, end=arr.size()-1;
    int tar=4;
    cout<<binarySearch(arr,tar,st,end);

    return 0;
}