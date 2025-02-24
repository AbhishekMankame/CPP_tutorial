// #include<bits/stdc++.h>
// using namespace std;

// void fast(){
//     ios_base::sync_with_stdio(0); 
//     cin.tie(0); 
//     cout.tie(0);
// }

// // Pass by value
// void applyTax(int &income){
//     float tax=0.10;
//     income=income - income*tax;
// }

// int main(){
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     freopen("error.txt","w",stderr);
// #endif

//     fast();
//     int income;
//     cin>>income;
//     applyTax(income);
//     cout<<income<<endl;

    
//     return 0;
// }

#include<iostream>
using namespace std;

void applyTax(int &income){
    float tax=0.10;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    int income;
    cin>>income;
    applyTax(income);
    cout<<income<<endl;
}