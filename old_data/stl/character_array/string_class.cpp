#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
    string s="hello world!!"; // This string uses dynamic array internally, so size can be changed in runtime also
    cout<<s<<endl; // print the string

    //It can also be writte as: string s("hello world!!");

    string b("Coding is great");
    cout<<b<<endl;

    string c;
    getline(cin,c); // read a string with spaces
    cout<<c<<endl;

    return 0;
}