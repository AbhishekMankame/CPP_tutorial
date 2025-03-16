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
    // Linear time complexity --> Linear kehne ka matlab hai, jitna mera input size increase ho raha hai (x-axis), utne mere number of operations (y-axis) usi proportion mei badh jaata hai
    vector<int> v = {1, 2, 3, 4, 5};
    int x=4;

    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            cout<<"Element "<<x<<" is found at the location "<<i;
            break;
        }
        //cout<<endl;
    }
    cout<<endl<<endl;;

    cout<<"Examples with O(1) complexity"<<endl;
    // O(1) complexity --> Constant time complexity
    // No matter how big the input is, the time taken will be constant
    cout<<"Sum of numbers from 1 to 100 using formula: "<<endl;
    cout<<"Sum of n numbers from 1 to 100 is "<<100*(100+1)/2<<endl;

    cout<<"Big O notation is used to describe the upper bound of the time complexity of an algorithm"<<endl;
    cout<<"Big O notation is used to denote the worst case time complexity of an algorithm"<<endl;

    /* Worst case or upper bound is denoted by Big O notation
       Best case or lower bound is denoted by Omega notation
       Average case is denoted by Theta notation

    */

    // Space complexity: It is the amount of memory or space taken by the algorithm as a function of input sizes
    // Space complexity mei hum auxiliary space consider hai, jo ki extra space hota hai jo humara algorithm use karta hai

    // Order of time complexities from Best to Worst
    // O(1) < O(logN) < O(N) < O(NlogN) < O(N^2) < O(N^3) < O(2^N) < O(N!)
    return 0;
}