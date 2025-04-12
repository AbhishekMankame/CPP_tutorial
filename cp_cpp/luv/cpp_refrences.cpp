#include<bits/stdc++.h>
using namespace std;

void increment(int &n){
    n++;
    // If parameter is passed by value in the function, then it will not change in the main function
    // If the parameter is passed by reference in the function, then it will also change in the main function
}
// Note arrays kabhi bhi by values pass nahi hote, it will always pass by reference

void func(string &s){
    s="";
}

int main(){
    int a=3;
    cout<<a<<endl;
    increment(a);
    cout<<a<<endl;

    string st="abhi";
    cout<<st<<endl;
    func(st);
    cout<<st<<endl;
    return 0;
}