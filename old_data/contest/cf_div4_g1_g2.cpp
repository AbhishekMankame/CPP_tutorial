#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll s=1;
    if(v[0]!=1){
        cout<<"NO"<<endl;
        return;
    }
    for(ll i=1;i<n;i++){
        if(v[i]<=s){
            s=+v[i];
            continue;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

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