#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    // Bitwise AND
    int a=5, b=7;
    cout<<"Bitwise AND of "<<a<<" and "<< b<< " is "<<(a&b)<<endl;
    cout<<"Bitwise OR of "<<a<<" and "<< b<< " is "<<(a|b)<<endl;
    cout<<"Bitwise XOR of "<<a<<" and "<< b<< " is "<<(a^b)<<endl;
    cout<<"Bitwise NOT of "<<a<<" is "<<(~a)<<endl;
    cout<<"Bitwise NOT of "<<b<<" is "<<(~b)<<endl;
    cout<<"Bitwise Left Shift of "<<a<<" by 1 is "<<(a<<1)<<endl;
    cout<<"Bitwise Right Shift of "<<a<<" by 1 is "<<(a>>1)<<endl;
    

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