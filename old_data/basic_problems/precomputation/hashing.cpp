/*
Given array a of N integers. Give Q queries and in each query given a number X, print count of that number in array.

Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5 
*/

// precomputation cannot be used for the array if the size is 10^9 as the maximum size of the array is 10^7 globally

// Time complexity of the code is O(N*Q) = O(N^2) = 10^10 --> won't run in 1 second
// So, we will use hashing to reduce the time complexity to O(N) + O(Q) = O(N) = 10^5 --> executes easily for 1 second
#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int hsh[N];

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
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
        // int ct=0;
        // for(int i=0;i<n;i++){
        //     if(a[i]==x){
        //         ct++;
        //     }
        // }

        cout<<hsh[x]<<endl;
    }
    // old time complexity- O(N*Q) = O(N^2)==10^10 --> won't run in 1 second
    
    //By using hashing
    // new time complexity(hashing) = O(N) + O(Q) = O(N)=10^5 --> executes easily for 1 second

}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    solve();

    
    return 0;
}