#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void reverseArray(int arr[], int n){
    int start=0,end=n-1;

    while(end>=start){
        swap(arr[start],arr[end]);
        end--;
        start++;
    }



}

int main(){
    int arr[]={10,20,30,45,60,80,90};
    int n=sizeof(arr)/sizeof(int);
    reverseArray(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}