#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        getline(cin,str);
        for(int i=0;i<str.length();i++){
            if(i==0 || str[i-1]==' '){
                cout<<str[i];
            }
        }
        cout<<endl;
    }
}