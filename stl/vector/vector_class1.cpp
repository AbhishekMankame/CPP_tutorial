#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

class Vector{
    // Data Members
    int *arr;
    int cs;
    int ms;

public:
    Vector(int max_size=1){
        cs=0;
        ms=max_size;
        arr = new int[ms];
    }

    void push_back (const int d){
        // Two cases
        if(cs==ms){
            // Create a mew array and delete the old one, double the capacity of the new array
            int *oldArray = arr;
            ms=2*ms;
            arr = new int[ms];
            for(int i=0;i<cs;i++){
                arr[i] = oldArray[i];
            }
            // deleting the old array
            delete[] oldArray; // This is important to avoid memory leak
            // Here delete[] oldArray is used to delete the old array and free up the memory allocated to it.
            // If we don't do this, we will have a memory leak as the old array will still be occupying memory even though we are not using it anymore. 
            // delete[] is inbuilt in C++ and is used to deallocate memory that was previously allocated using new.
    }
    arr[cs]=d;
    cs++;
}

    void pop_back(){
        if(cs>=0){ // Here cs>=0 is used to check if the vector is not empty before popping an element.
            // If cs is 0, it means the vector is empty and there is no element to pop. 
            cs--;
        }
    }

    bool isEmpty() const{
        return cs==0;
    }

    // Front, Back, At(i), [] --> This is operator overloading
    int front() const{
        return arr[0];
    }

    int back() const{
        return arr[cs-1];
    }

    int at(int i) const{
        return arr[i];
    }

    int size() const{
        return cs;
    }

    int capacity(){
        return ms;   // Max size is the capacity of the vector
    }

    /*Some good practices that we need to follow
    --> The arguement in the operator overloading should be constant
    --> Here we can make some functions as constant which doesnot modify any of the attributes of the class. 
    --> Note: Here we cannot make push_back constant, as this will be modifying the array/vector
    */ 

    int operator[](const int i){ // Here i will not be changing
        return arr[i];
    }
    
};

int main(){
    Vector v;
    v.push_back(1);
    cout<<v.size();
    cout<<endl<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.size()<<endl; 
    cout<<v.capacity()<<endl;
    v.push_back(3);
    v.push_back(4);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"Element at the front: "<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<v.at(1)<<endl;

    // Let's loop through the vector
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

    return 0;

}
