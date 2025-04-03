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
    
}

int main(){
    int n;
    cin>>n;
    applyTax(n);
    cout<<n<<endl;
}
