#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool isSubstring(string s1,string s2){
    int m=s1.length();
    int n=s2.length();

    if(m>n) return false; // Substring can not be longer than the main string

    // Loop through each possible starting point
    for(int i=0;i<=m-n;++i){
        int j;
        for(j=0;j<m;j++){
            if(s1[i+j]!=s2[j]){
                break;
            }
        }
        if(j==m){
            // Found full match
            return true;
        }
    }

    return false;
}

int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    if(isSubstring(s1,s2)){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }

}