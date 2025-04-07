#include<iostream>
using namespace std;

class Vector{
    // Data Members
    int *arr;
    int cs;
    int ms;

public:
    Vector(){
        cs=0;
        ms=1;
        arr = new int[ms];
    }

    void push_back(int d){
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
        cs++;
    }

    void pop_back(){
        if(cs>=0){ // Here cs>=0 is used to check if the vector is not empty before popping an element.
            // If cs is 0, it means the vector is empty and there is no element to pop. 
            cs--;
        }
    }

    bool isEmpty(){
        return cs==0;
    }

};

int main(){

}
