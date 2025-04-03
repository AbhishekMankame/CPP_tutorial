#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    // Reference variable in C++: A reference variable is a "reference " to an existing variable, and it is created with the & operator.

    string food="Pizza";
    string meal=food;
    string &lunch=food;
    cout<<"food: "<<food<<endl;
    cout<<"meal: "<<meal<<endl;
    cout<<"lunch: "<<lunch<<endl;
    meal[0]='S';
    cout<<"food: "<<food<<endl;
    cout<<"meal: "<<meal<<endl;
    cout<<"lunch: "<<lunch<<endl;
    lunch[0]='S';
    cout<<"food: "<<food<<endl;
    cout<<"meal: "<<meal<<endl;
    cout<<"lunch: "<<lunch<<endl;

}