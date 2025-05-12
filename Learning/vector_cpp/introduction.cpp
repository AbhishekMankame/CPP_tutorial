// Vector
/*
- Vectors are sequence containers representing arrays that can change in size.
- Just like arrays, vectors use contiguous storage locations for their elements, which means that their elements can also be accessed directly in O(1) time.
- But unlike arrays, their size can change dynamically, with their storage being handled automatically by the container.
*/

/*
Points to Note:
- Vectors can be used to create dynamic 1D and 2D Arrays
- Unlike arrays, vectors are passed by value to a function, we may can still pass them by refernece if need arises.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 10, 12, 15};

    // push_back() --> push_back function inserts at the end of the vector at O(1) time.
    arr.push_back(32);

    // Print all the elements
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Let's use for each loop to print the elements of vector
    for(int i : arr) {
        cout<<i<<" ";
    }
    cout<<endl;

    // Size of the vector (No. of elements)
    cout<<arr.size()<<endl;

    // Capacity of the vector
    cout<<arr.capacity()<<endl;

    // pop_back() --> Removes the last element of the vector
    arr.pop_back();

    for(int i : arr) {
        cout<<i<<" ";
    }
    cout<<endl;
}