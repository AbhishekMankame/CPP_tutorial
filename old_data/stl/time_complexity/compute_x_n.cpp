#include<iostream>
#include<vector>
using namespace std;

/*Computing x<n
In Leet code, question number 50, Pow(x,n) is a famous question. In this question, we are give two integers x and n.
We have to compute x^n. The naive approach is to multiply x n times. But this approach is not efficient.

*/

double myPow(double x, int n){
    long binForm=n;
    double ans=1;

    if(n<0){
        x=1/x;
        binForm=-binForm;
    }

    while(binForm>0){
        if(binForm%2==1){
            ans*=x;
        }
        x=x*x;
        binForm=binForm/2;
    }

    return ans;
}

int main(){
    int n=8,x=5;
    cout<<myPow(x,n)<<endl;
    cout<<myPow(2,10)<<endl;


    return 0;
}