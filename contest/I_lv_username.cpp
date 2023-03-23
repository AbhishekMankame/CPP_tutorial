#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mn=a[0];
    int mx=a[0];
    int c=0;
    for(int i=1;i<n;i++){
        if(a[i]>mx){
            mx=max(mx,a[i]);
            c++;
        }
        else if(a[i]<mn){
            mn=min(mn,a[i]);
            c++;
        }
    }
    cout<<c<<endl;
}