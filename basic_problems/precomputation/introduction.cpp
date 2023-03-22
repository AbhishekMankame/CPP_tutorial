/*
Given T test caes and in each test case a number N. Print it's factorial for each test case %M
where M = 10^9+7

Constraints
1 <= T <= 10^5
1 <= N <= 10^5
*/

#include<bits/stdc++.h> 
using namespace std;
const int M=1e9+7;
const int N=1e5+10;
long long fact[N];

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    int n;
    cin>>n;
    long long int fact=1;
    for(int i=2;i<=n;i++){
        fact=(fact*i)%M;
    }
    cout<<fact<<endl;
    //O(T*N)=10^10 iterations
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif
    fact[0]=fact[1]=1;
    for(int i=2;i<N;i++){
        fact[i]=fact[i-1]*i;
    }
    fast();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fact[n]<<endl;
        
    }
    // OLD complexity --> O(T*N) = 10^10
    // NEW complexity --> O(N) + O(T) = 10^5 + 10^5

    
    return 0;
}