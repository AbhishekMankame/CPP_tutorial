// Recursive function
// A function which calls itself is called recursive function

#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void func(int n){
    if(n==0) return;
    cout<<n<<endl; //Here func(5) is called at first
    func(n-1);
    cout<<n<<endl; //Here func(1) will be considered first 

}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    func(5);

    
    return 0;
}