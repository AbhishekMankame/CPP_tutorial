// //#include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// void fast(){
//     ios_base::sync_with_stdio(0); 
//     cin.tie(0); 
//     cout.tie(0);
// }

// // Pass by reference using reference variables
// void applyTax(int & money){
//     float tax = 0.10;
//     money = money - money*tax;
// }

// int main(){
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     freopen("error.txt","w",stderr);
// #endif

//     //fast();
//     int money=1000;
//     //cin>>income;
//     applyTax(money);
//     cout<<money<<endl;

    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

void applyTax(int & money){
    float tax=0.10;
    money = money - money*tax;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    int income=100;
    //cin>>income;
    applyTax(income);
    cout<<income<<endl;

}