#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

int ** create2DArray(int rows, int cols){
    int** arr = new int*[rows];

    // Allocate memory for each row
    for(int i=0;i<rows;i++){
        arr[i]=new int[cols];
    }

    // Initialize the array with increasing list of numbers
    int value=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            arr[i][j]=value;
            value++;
        }
    }
    return arr;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    int rows,cols;
    cin>>rows>>cols;

    int **arr=create2DArray(rows,cols);

    
    return 0;
}