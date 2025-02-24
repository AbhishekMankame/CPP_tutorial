#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    vector<int> arr={1,2};

    //push_back --> O(1) (Inserts elements at the end of the array/vector)
    arr.push_back(3);

    // Print all the elements
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //size of the vector (Number of elements)
    cout<<arr.size()<<endl;

    //capacity of the vector (Actual memory allocated for the given vector)
    cout<<arr.capacity()<<endl;

    //Pop_back
    arr.pop_back();
    // Print all the elements
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Fill constuctor
    vector<int> a(10,7);
    // Fill
    vector<int> visited(100,0); 

    // Print all the elements
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    

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