#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    int a=10;
    int b=a;
    cout<<a<<endl<<b<<endl;
    cout<<&a<<endl<<&b<<endl;
    b++;
    a++;
    cout<<a<<endl<<b<<endl;

    cout<<endl;
    int c=5;
    int &d=c;
    cout<<c<<endl<<d<<endl;
    cout<<&c<<endl<<&d<<endl;
    d++;
    c++;
    cout<<c<<endl<<d<<endl;

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