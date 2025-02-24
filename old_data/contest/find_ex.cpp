#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ct;
    for(int i=1;i<100;i++){
        if((a+i)%b==(c+i)%d){
            ct=i;
            break;
        }
        else{
            continue;
        }
    }
    cout<<ct<<endl;
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