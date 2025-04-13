#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
const int N = 1e5+10;
long long fact[N];

// Precomputation techniques

/*Factorial of a number N, for each test case %M where M=10^9+7

Constraints
1<=T<=10^5
1<=N<=10^5
*/

int main(){
    fact[0]=fact[1]=1;
    for(int i=2;i<=N;i++){
        fact[i]=fact[i-1]*i;
    }
    // Iske wajah se saare ke saare factorial stored hai
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fact[n]<<endl;
    }
    return 0;
}

// Time Complexity --> Normal approach = 10^10 --> This will mostly cause TLE in online judge
// Tme Complexity --> Using pre computation = 10^5