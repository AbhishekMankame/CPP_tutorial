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

    for(char i:b){
        cout<<i<<",";
    }
    cout<<endl;
    string c;
    getline(cin,c); // read a string with spaces
    cout<<c<<endl;

    // vector<string> ....
    int n=5;
    vector<string> sarr;
    string temp;
    while(n--){
        getline(cin,temp); // read a string with spaces
        sarr.push_back(temp);
    }
    for(string x:sarr){
        cout<<x<<endl; // print the string
    }

    return 0;
}