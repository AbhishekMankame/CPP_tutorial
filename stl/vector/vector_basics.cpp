#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr; // Declaring a vector of integeters with size 0
    cout<<"Size of vector: "<<arr.size()<<endl; // Size of vector is 0
    cout<<"Capacity of vector: "<<arr.capacity()<<endl; // Capacity of vector is 0
    cout<<"Max size of vector: "<<arr.max_size()<<endl; // Max size of vector is 2^32-1

    arr.push_back(1); // Adding 1 to the vector
    cout<<"Size of vector: "<<arr.size()<<endl; // Size of vector is 1
    cout<<"Capacity of vector: "<<arr.capacity()<<endl; // Capacity of vector is 1

    arr.push_back(2); // Adding 2 to the vector
    cout<<"Size of vector: "<<arr.size()<<endl;
    cout<<"Capacity of vector: "<<arr.capacity()<<endl;

    arr.push_back(3); // Adding 3 to the vector
    cout<<"Size of vector: "<<arr.size()<<endl;
    cout<<"Capacity of vector: "<<arr.capacity()<<endl;

    // Here size tells the number of elements in the vector and capacity tells the number of elements that can be stored in the vector without reallocation. 
    // When we add more elements than the capacity, the vector is reallocated to a large size and the old elements are copied to the new vector. 
}