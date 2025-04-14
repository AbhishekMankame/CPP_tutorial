#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int arr[N];
int prefix[N];

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Precompute prefix sum
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    cout<<prefix[3]<<endl;
}