#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    cout<<str1<<endl<<str2<<endl;

    int t;
    cin>>t;
    cin.ignore(); // Here we use cin.ignore() to ignore the cursor space
    while(t--){
        string s;
        getline(cin,s);
        cout<<s<<endl;
    }

    return 0;
}

