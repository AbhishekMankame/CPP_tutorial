#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

int sumOfDigits(int n){
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}

void solve(){
    // Here we will calculate the sum of digits of a number using functions
    int n;
    cin>>n;
    cout<<sumOfDigits(n)<<endl;

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