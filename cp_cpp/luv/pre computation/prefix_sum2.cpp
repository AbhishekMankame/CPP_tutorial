#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = 1e5+10;
int a[N];
int pf[N];

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pf[i]=pf[i-1]+a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<pf[r] - pf[l-1]<<endl;
    }
}

// O(N) + O(Q*1) == 10^5