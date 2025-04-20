#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=1e5+10;
int a[N];

/*
Given array of N integers. Given Q queries and in each query given L and R print sum of array elements from index L to R (L,R included)

Constraints
1<=N<=10^5
1<=a[i]<=10^9
1<=Q<=10^5
1<=L,R<=N
*/

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){ // Here we have considered as 1 based array
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        ll sum=0;
        for(int i=l;i<=r;i++){
            sum+=a[i];
        }
        cout<<sum<<endl;
    }

    return 0;
}

// O(N) + O(Q*N) = 10^10 --> This code will not run in 1 second