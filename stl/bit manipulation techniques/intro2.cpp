#include<bits/stdc++.h>
using namespace std;

// Let's see about binary left shift and binary right shift operator

int main(){
    cout<<(5<<2)<<endl; // left shift
    cout<< (5>>2) <<endl; // right shift
    // Note: Left shift does multiplication and right shift divides
    // a<<b = a*(2^b)
    // a>>b = a/(2^b)

    /*Odd or Even
    Write a function or expression to check if a number is odd or even!! using bitwise operator
    Note: all the odd numbers will have last bit as 1 and all the even numbers will have last bit as 0
    Here last bit decides whether the given number is odd or even.
    */

    int x;
    cin>>x;
    if(x&1){
        cout<<"Odd"<<endl;
    }
    else{
        cout<<"Even"<<endl;
    }

}