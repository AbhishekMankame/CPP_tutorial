#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[7]={3,-4,5,4,-1,7,-8};
    int size=7;

    int curSum=0,maxSum=INT_MIN;
    for(int i=0;i<size;i++){
        curSum=curSum+arr[i];
        maxSum=max(maxSum,curSum);
        if(curSum<0){
            curSum=0;
        }
    }
    cout<<"Maximum subarray sum:"<<maxSum<<endl;

    return 0;
}