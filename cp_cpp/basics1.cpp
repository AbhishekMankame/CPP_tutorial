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
    cout<<'c'+'d'<<endl; // This will give 199, as the ASCII value of 'c' is 99 and 'd' is 
    
    // Note: int ki rough range -10^9 to 10^9
    // long int ki rough range -10^12 to 10^12
    // long long int ki rough range -10^18 to 10^18    

    int a=100000;
    int b=100000;
    int c = a*b; // yaha par overflow ho jaayega
    cout<<c<<endl;
    int mx=INT_MAX;
    cout<<"Maximum integer value: "<<mx<<endl;
    int mn=INT_MIN;
    cout<<"Minimum integer value: "<<mn<<endl;

    int d=100000;
    int e=100000;
    long long f=d*1LL*e; // Yaha par 1LL ke wajah se woh 1 ko as a long long int treat karta hai
    cout<<f<<endl;

    // As we know that double and float has the high range, then why don't we use that
    double x=10000;
    double y=10000;
    double z=x*y;
    cout<<z<<endl; // This will print the output in the form of scientific notation
    // To remove the scientific sign form, we can use fixed keyword
    cout<<fixed<<z<<endl;
    


    return 0;
}