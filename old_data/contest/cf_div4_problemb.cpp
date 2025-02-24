#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll e=0;
    ll o=0;
    for(ll i=0;i<n;i++){
        if(a[i]%2==0){
            e=e+a[i];
        }
        else{
            o=o+a[i];
        }
    }
    if(e>o){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    
    return 0;
}