#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/* Character array
 Character arrray is a data structure that stores a sequence of characters. 
 It is a null terminated array of characters. 
 
 Creating a Char array
 char a[100];
 
 char a[100]={'a','b','c','d','e'}; // Wrong way

 char a[100]={'a','b','c','d','e','\0'}; // Correct way

 char a[100]="hello"; // Automatically appends '\0' at the end
*/

int main(){
    char a[100]={'a','b','c','d','e'};
    cout<<a<<" "<<endl;

    return 0;
}