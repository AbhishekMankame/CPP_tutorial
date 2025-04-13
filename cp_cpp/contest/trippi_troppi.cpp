#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        getline(cin,s);
        bool w=true;
        for(char c:s){
            if(c==' '){
                w=true;
            }
            else if(w){
                cout<<c;
                w=false;
            }
        }
        cout<<endl;
    }
}