#include<bits/stdc++.h>
using namespace std;

// sum of array
// sum(n,a) --> sum of elements in a uptill n index

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

int sum(int n){
    if(n==0) return 1; //base condition

}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    int n;
    cin>>n;
    cout<<fact(n)<<endl;

    
    return 0;
}