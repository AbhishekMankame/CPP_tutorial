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

    // 2D array
    int x,y;
    cin>>x>>y;
    int b[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    // Note: Size of arrays
    // Agar main ke andar local array declare kar rahe hai toh uske array ke size ki limit hoti hai 10^5
    // Global array declaration should be constant, global array ki limit 10^7 ki hoti hai
    // Reason: Jab bhi hum koi variable locally declare karte hai toh woh stack memory mei initialize hoti hai, jiski size limit around 8mb hoti hai
    // Par jab bhi hum global variable ko declare karte hai toh woh data segment mei define hota hai, jiski memory ki as such koi limit nahi hoti.

}