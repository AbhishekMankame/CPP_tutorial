#include<iostream>
#include<vector>
using namespace std;

void printAllSubarrays(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i+1;k<j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);

    printAllSubarrays(arr,n);
}

// Time complexity --> O(N^3)
// Space complexity --> O(1)
