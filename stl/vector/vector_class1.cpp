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
        }


        arr[cs]=d;
        cs++;
    }

};

int main(){

}
