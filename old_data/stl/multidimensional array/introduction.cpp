#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

/*Multidimensional array
Multidimensional arrays are arrays of arrays. They cab be used to store data in a tabular format. 
For example, a 2D array can be used to store data in a matrix format
or a 3D array can be used to store data in a cube format. 

*/

void print(int arr[][100], int n, int m){ // Here in 2D array passing the number of rows in optional, but passing the number of columns is must or mandatory
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" "; // Print each element of the array
        }
        cout<<endl; // Print new line after each row
    }

}

int main(){
    int arr[100][100]; // 2D array of size 100x100
    int n,m; // n is number of rows and m is number of columns
    cout<<"Enter number of rows and columns: ";
    cin>>n>>m;
    // Note: Range of 2 D array will be in general from (0,0) to (n-1,m-1

    // take input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){ // Note: Indexing of array starts from index 0
            cin>>arr[i][j]; // take input for each element of the array
        }
    }
    // print the array
    cout<<"The array is: "<<endl;
    print(arr,n,m); // Call the function to print the array

}