#include<iostream>
#include<vector>
using namespace std;

/* Some information about vectors
--> Vectors are dynamic arrays that can grow and shrink in size.
--> They are part of the C++ Standard Template Library (STL).
--> Vectors are sequence containers representing arrays that can change in size. 
--> Just like arrays, vectors use contiguous storage locations for their elements, which means that their elemetns can also be accessed directly in O(1) time. (Constant time)
--> But unlike arrays, their size can change dynamically, with their storage being handled automatically by the container. 

--> 

Growth of vector:
 --> When a vector is full and a new element is added, the vector will allocate a new array with double the size of the old one, copy the old elements to the new array, and then add the new element. This process is called reallocation. 
 --> This means that the time complexity of adding an element to a vector is O(1) on average, but can be O(n) in the worst case when reallocation occurs. 
 --> The amortized time complexity of adding an element to a vector is O(1), which means that if you add a large number of elements to a vector, the average time taken per element will be O(1). 

*/

int main()
{
    vector<int> v;
    int n;
    cout<<"Enter the size of the vector: ";
    cin>>n;
    cout<<"Enter the elements of the vector: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"The elements of the vector are: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}