#include<bits/stdc++.h> // It is called preprocessor directive
using namespace std;  // Yaha par ham use karna chahate hai namespace jiska naam std hai

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif
    cout<<"Namaste Duniya"<<endl;

    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    if(n%2==0){
        cout<<"Even"<<endl;
    }else{
        cout<<"Odd"<<endl;
    }
    return 0;
}