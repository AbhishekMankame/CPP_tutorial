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
    ptr++;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    // pointer subtraction
    int* ptr1;
    int* ptr2 = ptr1 +2;
    cout<<ptr1<<endl<<ptr2<<endl;
    cout<<ptr2-ptr1<<endl;

    //comparing pointer
    int* ptr3;
    int* ptr4;
    cout<<endl<<ptr3<<endl<<ptr4<<endl;
    cout<<(ptr3<ptr4)<<endl;


    return 0;
}