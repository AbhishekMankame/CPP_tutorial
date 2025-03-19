#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a=10;
    int* ptr=&a;
    int** ptr2=&ptr;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
    cout<<ptr2<<endl;
    cout<<*ptr2<<endl<<**ptr2<<endl;
    cout<<&ptr2<<endl;
    return 0;
}