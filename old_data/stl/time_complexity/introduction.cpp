/**
 * @file introduction.cpp
 * @brief Introduction to Time Complexity in C++ STL
 *
 * This file provides an introduction to the concept of time complexity,
 * which is a measure of the amount of time an algorithm takes to complete
 * as a function of the length of the input. Understanding time complexity
 * is crucial for writing efficient code and optimizing performance.
 */

 // Time complexity is NOT the actual time taken but the amount of time taken as function of input size (N)
 // Yaha par amount of time taken we will measure as amount of operations
#include<iostream>
#include<vector>
using namespace std;

int main(){


    // Linear Search --> O(N) complexity
    vector<int> v = {1, 2, 3, 4, 5};
    int x=4;

    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            cout<<"Element "<<x<<" is found at the location "<<i;
            break;
        }
        //cout<<endl;
    }
    cout<<endl;


    return 0;
}