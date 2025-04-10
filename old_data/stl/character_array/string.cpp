#include<bits/stdc++.h>
using namespace std;

// Strings are sequence of characters that are ussed to store words and text.They are also used to store data, such as numbers and other types of information in the form of text.
// Strings are provided by <string> header file in the form of std::string class.
// Note: strings joh hai woh double quote mei aati hai, and character single quote mei aati hai

int main(){
    string str="Hello";
    cout<<str<<endl;
    string str2;
    cin>>str2;
    cout<<str2<<endl;
    cout<<str+str2<<endl;
    if(str==str2){
        cout<<"Equal"<<endl;
    }
    else{
        cout<<"Not equal"<<endl;
    }
}