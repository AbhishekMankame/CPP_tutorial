#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int hsh[N];

// Solving using hashing
// Here we will use hash array to store the count, hash array ke har ek index mei uss element ka count store kar denge
// For example, hash array ke 0th index mei, 0 ke count store karenge

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        hsh[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;
        
    }
}

// Time Complexity: O(N) + O(Q) = 2*10^5, this code will pass in 1 second in online judge