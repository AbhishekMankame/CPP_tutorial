#include<iostream>
#include<vector>
using namespace std;

// Array Pointer - Array name is a pointer to the first element of the array
// Array pointer are constant pointers, they cannot be changed

int main(){
    int arr[]={1,2,3,4,5};
    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<<&arr<<endl;

    // Pointer Arithmetic
    // Increment and decrement of pointer is done by the size of the data type it is pointing to 
    int a=10;
    int* ptr=&a;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    return 0;
}