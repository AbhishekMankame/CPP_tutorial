#include<iostream>
#include<vector>
using namespace std;

int main(){
    // 2D vector: It is a vector of vectors
    vector<vector<int>> arr = {{1,2,3}, 
    {4,5,6}, 
    {7,8,9,10}, 
    {11,12}};

    /* 2D vector is more powerful than 2D arrays as each row can have different number of elements
    */

    cout<<"Size of the given vector: "<<arr.size()<<endl;
    cout<<"Capacity of the given vector: "<<arr.capacity()<<endl;

    // Iterating through the 2D vector
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Updating particular elements
    arr[0][1]+=10;

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}