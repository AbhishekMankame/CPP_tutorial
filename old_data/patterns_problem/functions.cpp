#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}
void fact(int a){
    int f=1;
    for(int i=1;i<=a;i++){
        f=f*i;
    }
    cout<<f<<endl;

}

void changeX(int n){
    n=n*2;
    cout<<"n = "<<n<<endl;
}

void solve(){
    int n=5;
    changeX(n);
    cout<<"n = "<<n<<endl;
    //cout<<fact(n)<<endl;
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