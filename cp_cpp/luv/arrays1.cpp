#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10];
    a[11]=10;
    cout<<a[11]<<endl;// This is undefined behaviour, this might cause segmentation fault
   
   // Sum of element of array
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;

}