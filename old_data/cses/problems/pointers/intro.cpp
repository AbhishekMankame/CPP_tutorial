/*
Pointers:

Pointers are one of the most powerful and confusing aspects of the C/C++ language
*/

#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    int p=5;
    int *q=&p;
    cout<<q<<endl;
    cout<<&p<<endl;
    float c=54.00;
    cout<<&c<<endl;
    char d='a';
    cout<<&d<<endl;


    // Demo Pointer
    int x=10;
    int *xptr = &x;
    cout<<endl<<endl;
    cout<<xptr<<endl;

    // Address of a pointer variable
    cout<<&xptr<<endl;

    //Pointer to a Pointer
    cout<<endl;
    int **xxprt=&xptr;
    cout<<xxprt;

    cout<<endl<<endl;
    cout<<"Coding_minutes_code"<<endl;
    // Prateek bhaiya's code
    int y=10;
    float yy=5.5;
    cout<<&y<<endl;
    int *yptr=&y;
    cout<<yptr<<endl;
    //Address of a pointer variable
    cout<<&yptr<<endl;

    //Pointer to a pointer
    int **yyptr=&yptr;
    cout<<yyptr<<endl;
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