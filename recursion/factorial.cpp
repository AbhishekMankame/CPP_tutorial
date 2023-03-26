#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

int fact(int n){
    if(n==0) return 1; //base condition
     return fact(n-1)*n;

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

/*
Time Complexity of recursive function:
1. Number of function calls --> In this case N calls
2. What is complexity of each function --> O(1) in this case
*/