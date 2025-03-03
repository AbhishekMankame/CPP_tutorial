#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
            for(int j=0;j<2*i-1;j++){
                cout<<" ";
            }
            cout<<"*";

        }
        
        cout<<endl;
    }

    // for bottom part
    for(int i=0;i<n-1;i++){
        //spaces
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=n-2){
            //spaces
            for(int j=0;j<2*(n-i)-5;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

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