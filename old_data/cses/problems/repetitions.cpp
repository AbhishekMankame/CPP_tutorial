/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input

The only input line contains a string of n
 characters.

Output

Print one integer: the length of the longest repetition.

Constraints
1≤n≤106

Example

Input:
ATTCGGGA

Output:
3

*/

#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    string s;
    cin>>s;
    int ct=0;
    int m=0;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            ct++;
        }
        m=max(m,ct);
    }
    cout<<m<<endl;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    solve();

    
    return 0;
}