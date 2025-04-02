#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;

/*Spiral Print
Write a function that takes in nxm 2D array, and prints the all array elements in a spiral order. Start from the top left corner goes to right, proceeds in a spiral pattern until every element is visited. 
Input: 1 2 3 4
       5 6 7 8
       9 10 11 12
       13 14 15 16
Output: 1 2 3 4 5 12 16 15 14 13 9 5 6 7 11 10

*/

void print(int arr[][10], int n, int m){
    // 4 variables to track the boundaries of the array
    int startRow=0;
    int endRow=n-1;
    int startCol=0;
    int endCol=m-1;

    // Outer loop (Traverse array boundary)

    while(startCol<=endCol){

        // Start Row
        for(int col=startCol;col<=endCol;col++){
            cout<<arr[startRow][col];
        }

        // End Column
        for(int row=startRow+1;row<=endRow;row++){
            cout<<arr[row][endCol];
        }

        // End Row
        for(int col=endCol-1;col>=startCol;col--){
            cout<<arr[endRow][col];
        }

        // Start Column
        for(int row=endRow-1;row>=startRow+1;row--){
            if(startCol==endCol){
                break; // Avoid printing the same element again if it's a single column
            }
            cout<<arr[row][startCol];
        }

        // Update the variables to point to inner spiral
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
}

int main(){
    //Print in spiral form
    int arr[][4]={{1,2,3,4},
                  {5,6,7,8},
                  {9,10,11,12},
                  {13,14,15,16}};
    int n=4,m=4;

    return 0;
}