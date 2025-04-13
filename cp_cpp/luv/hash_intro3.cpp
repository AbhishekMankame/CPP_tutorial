#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int fib[N];

int main(){
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<=N;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<fib[x]<<endl;
    }
}