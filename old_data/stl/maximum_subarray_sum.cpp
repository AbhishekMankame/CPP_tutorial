#include<iostream>
#include<vector>
using namespace std;


int main(){
    int arr[5]={2,4,-5,3,6};
    int size=5;
    int maxSum=INT_MIN;
    //int curSum=0;

    for(int start=0;start<size;start++){
        int curSum=0;
        for(int end=start;end<size;end++){
            curSum+=arr[end];
            maxSum=max(maxSum,curSum);
            //cout<<curSum<<" ";
        }
    }
    cout<<maxSum<<endl;

}