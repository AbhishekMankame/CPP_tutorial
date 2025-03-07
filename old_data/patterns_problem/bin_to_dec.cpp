#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

int binToDec(int binNum){
    int ans=0;
    int pow=1;
    int rem;
    while(binNum>0){
        rem=binNum%10;
        binNum/=10;
        ans=ans+rem*pow;
        pow=pow*2;

    }
    return ans;
}

void solve(){
    int binNum=100;
    cout<<binToDec(binNum)<<endl;

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