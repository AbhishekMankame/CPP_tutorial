#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

// Pass by reference

void applyTax(int &income){
    float tax=0.10;
    income = (1-tax)*income; // or can also be written as income = income - income*tax
    // Note: here when we passed int income in the function, at that time the output in main did not get updated during the output.
    // We gave value of n as 100, instead of printing the output as 90, it printed 100, but when we passed by reference, we have got the correct value as output.
    
}

int main(){
    int n;
    cin>>n;
    applyTax(n);
    cout<<n<<endl;
}
