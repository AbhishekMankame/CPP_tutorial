#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void reverseArray(int arr[], int size){
    int start=0, end=size-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void solve(){
    int arr[]={4,2,7,8,1,2,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    reverseArray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

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