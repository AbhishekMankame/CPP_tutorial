#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;

/* Multidimensional character array
Multidimensional character array is a 2D array of characters. 
It is used to store strings in a 2D format. 
*/

int main(){
    char numbers[][10]={"one","two","three","four"};

    for(int i=0;i<numbers[i][0];i++){
        cout<<numbers[i]<<" "; // Print each string in the array
    }
    cout<<endl;
    cout<<numbers[0][2]<<endl; // Print the first string in the array
    // Here numbers[i] actually prints the entire array of characters
    // Note: cout treats character array differently
}