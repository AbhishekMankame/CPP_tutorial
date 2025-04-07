#include<iostream>
#include "vector.h"
using namespace std;

int main(){
    Vector<int> v;
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