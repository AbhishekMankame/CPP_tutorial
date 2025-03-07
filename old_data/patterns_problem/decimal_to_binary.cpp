#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

int decToBin(int decNum){
    int ans=0;
    int pow=1;
    int rem;
    while(decNum>0){
        rem=decNum%2;
        decNum/=2;
        ans=ans+rem*pow;
        pow=pow*10;
    }
    return ans;
}

void solve(){
    int decNum=6;
    cout<<decToBin(decNum)<<endl;
    
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