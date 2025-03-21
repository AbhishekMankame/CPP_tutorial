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
}