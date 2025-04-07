#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    // we will see about find() function, it is present in the header file algorithm
    vector<int> arr = {10,11,2,3,4,6,7,8};
    int key = 11;

    vector<int>::iterator it = find(arr.begin(),arr.end(), key); // Here we are using iterator to find the key in the vector, here arr.begin() is the starting point and arr.end() is the ending point of the vector.
    // Here it will consider the arr.begin() as closed interval and arr.end() as open interval.


}