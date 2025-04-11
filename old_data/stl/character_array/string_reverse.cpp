#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    string str_rev;
    for(int i=str.length()-1;i>=0;i--){
        // str_rev=str_rev+str[i]; This is not a good approach, as we are adding character to a string
        str_rev.push_back(str[i]);
    }
    cout<<str_rev<<endl;

    // Let's code for palindrome of a string
    if(str==str_rev){
        cout<<"It is palindrome "<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }

    return 0;
}