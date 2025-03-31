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

int main(){
    int arr[100][100]; // 2D array of size 100x100
    int n,m; // n is number of rows and m is number of columns
    cout<<"Enter number of rows and columns: ";
    cin>>n>>m;

    // take input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j]; // take input for each element of the array
        }
    }

}