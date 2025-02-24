#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    int n;
    cin>>n;

    //Dynamic Array
    int *arr = new int[n];
    cout<<arr<<endl;
    for(int i=0;i<n;i++){
        arr[i]=i;
        cout<<arr[i]<<" ";
    }
    cout<<endl<<arr[2]<<endl;

    // Delete
    delete [] arr;
    cout<<endl<<arr<<endl;
    cout<<*arr<<endl;
    cout<<arr[2]<<endl;

    
    return 0;
}