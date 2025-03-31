#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    char a[1000]="apple";
    char b[1000];
    cout<<strlen(a)<<endl; 

    // strcpy --> it is used to copy the string from one variable to another.
    // strcpy(b,a); // copy a to b
    cout<<strcmp(a,b)<<endl; // compare a and b
    strcpy(b,a);
    cout<<b<<endl; // print b
    cout<<a<<endl; // print a
    cout<<strcmp(a,b)<<endl; // compare a and b

    // strcmp --> It is used to compare two strings. 

    // strcat --> It is used to concatenate two strings. 
    cout<<strcat(a,b)<<endl; // concatenate a and b and store it in a

    char web[]="www.";
    char domain[]="google.com";
    cout<<strcat(web,domain)<<endl; // concatenate web and domain and store it in web
    cout<<web<<endl; // print web
}