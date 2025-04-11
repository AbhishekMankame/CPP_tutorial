#include<iostream>
#include<string>
using namespace std;


// Agar bohot bada number de which is of the range 10^30 or 40 which is out of range of long long it.
// We do not use float or double because, it doesnot give precise value, so we store it in the string

int main(){
    string s;
    cin>>s;
    cout<<s<<endl;
    int last_digit=s[s.size()-1]-'0';
    cout<<last_digit<<endl;

    /*
    string s;
    for(int i=0;i<n;i++){
        s.push_back('a');
    } .. Time Complexity: O(1)
    Here for the each value of i, the complexity will be O(1)

    for(int i=0;i<n;i++){
        s=s+'a';
    } .. Time Complexity: O(s.size())


    */
}