/*
Dereference Operator *
An interesting property of pointers is that they can be used to access the variable they point to directly. This is done by preceding the pointer name with the dereference operator(*). The operator itself can be read as "value pointed to by"
*/

/*
NULL pointer:
Sometimes it is useful to make our point to nothing. This is called a null pointer.

We assign a pointer a null value by setting it to address 0:
*/

#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    int *p=0;
    int *q=NULL;
    cout<<p<<endl;
    cout<<q<<endl; 
    /*   //cout<<*p<<endl;  //segmentation fault as we cannot dereference a null pointer
    // segmentation fault is a memory related error as this address does not exists
*/
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