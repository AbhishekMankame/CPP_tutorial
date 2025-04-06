#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr; // Declaring a vector of integeters with size 0
    cout<<"Size of vector: "<<arr.size()<<endl; // Size of vector is 0
    cout<<"Capacity of vector: "<<arr.capacity()<<endl; // Capacity of vector is 0
    cout<<"Max size of vector: "<<arr.max_size()<<endl; // Max size of vector is 2^32-1
}