/* 
Modular arithmetics:
(a+b)%M = ((a%M) + (b%M))%M
(a*b)%M = ((a%M) * (b%M))%M
(a-b)%M = ((a%M)-(b%M)+M)%M
(a/b)%M = ((a%M)*((b^-1)%M)%M
where b^-1 is multiplicative inverse
b-inverse is calculated using binary exponentiation or modular exponentiation 

*/

/*
Given a number N. Print its factorial.
Constraints
1<=N<=100

// print answer module M where M=47(some or any prime number)

print answer module M where M=10 ^ 9 + 7

*/

/*
Significance of 10^9+7
1. 10^9+7 is very close to integer maximum
    (one good thing is it is sure that final answer can be stored in integer data type(even long long is need not to be used))

2. Multiplicative Inverse
*/

#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    int n;
    cin>>n;
    int N=47;
    long long fact=1;
    for(int i=2;i<=n;++i){
        fact=(fact*i)%N;
    }
    cout<<fact<<endl;

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