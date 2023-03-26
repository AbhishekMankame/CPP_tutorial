#include<iostream>
#include<vector>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

//2D vector
    vector<vector<int>> arr={
        {1,2,3},{4,5,6},{7,8,9,10},{11,12}
    };

    for(int i=0;i<arr.size();i++){
         for(int number: arr[i]){
            cout<<number;
         }
         cout<<endl;
    }

    return 0;
}