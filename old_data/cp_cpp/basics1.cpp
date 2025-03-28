#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    cout<<7/2<<endl; // This will give 3
    cout<<7.0/2<<endl; // This will give 3.5
    cout<<7/2.0<<endl; // This will give 3.5
    // Calculations joh bhi hoti hai, woh higher data type me hoti hai
    cout<<'c'+1<<endl; // This will give 100, as the ASCII value of 'c' is 99
    cout<<'c'+'d'<<endl; // This will give 199, as the ASCII value of 'c' is 99 and 'd' is 100

    return 0;
}