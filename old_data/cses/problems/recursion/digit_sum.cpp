#include<bits/stdc++.h>
using namespace std;

// sum of array
// sum(n,a) --> sum of elements in a uptill n index

// sum(n,a) = a[n] + sum(n-1,a)

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

int sum(int n, int a[]){
    if(n<0) return 0;
    return sum(n-1,a) + a[n];

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
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<sum(n-1,a)<<endl;
    return 0;
}