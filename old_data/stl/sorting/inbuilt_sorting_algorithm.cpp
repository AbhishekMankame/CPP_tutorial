#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    cout<<"Comparing "<<a<<" and "<<b<<endl;
    return a<b;
}

// Note: Here compare function is not being called, it is being passed as a parameter to the sort function.
// Inside the sort function it is called multiple times and it controls the comparison or the direction in which the sorting should proceed

int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    // sort the array using inbuilt sort function
    sort(arr,arr+n,compare); // here compare is not a funcion call, as here we are passing a function as a parameter to the another function. This compare function basically controls that how we should do the comparison.
    for(auto x: arr){
        cout<<x<<" ";
    }

    return 0;
}

/* Let's talk about Inbuilt sorting algorithm in C++
Inbuilt sorting algorithm in C++ is a hybrid sorting algorithm. It is a combination of Quick Sort, Heap Sort and Insertion Sort.
It is the most efficient sorting algorithm in C++. 
It is implemented in the header file <algorithm> and the function is sort(). 
Syntax: sort(starting address, ending address)
It takes two arguements, the starting address of the array and the ending address of the array. 
It sorts the array in increasing order by default. 
It is a stable sorting algorithm. 

Time Complexity: O(NlogN) in the average and worst case. 
Space Complexity: O(1) as no extra space is used. 

*/