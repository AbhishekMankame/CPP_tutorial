#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}


// pass by reference using pointer variable
void watchVideo(int * views){
    *views= *views+1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    int views=100;
    watchVideo(&views);
    cout<<views<<endl;

    
    return 0;
}