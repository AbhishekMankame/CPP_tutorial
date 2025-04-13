#include<bits/stdc++.h>
using namespace std;

/*Given array a of N integers. Given Q queries and in each query given a number X, print count of that number in array.

Constraints
1<=N<=10^5
1<=a[i]<=10^7
1<=Q<=10^5

*/

// Let us solve using normal method first

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int ct=0;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                ct++;
            }
        }
        cout<<ct<<endl;
    }
}