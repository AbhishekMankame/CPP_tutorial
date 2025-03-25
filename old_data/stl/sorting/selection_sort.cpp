#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/* Selection Sort
Selection sort is a simple sorting algorithm. It selects the smallest element from the unsorted portion of the array and swaps it with the first element of the array. 
It then selects the second smallest element from the unsorted portion and swaps it with the second element of the array, and same goes on. 
It is not suitable for large data sets as its average and worst case complexities are of O(N^2), where N is the number of items.

Key Idea: Repeatedly select the smallest element from the unsorted part and putting it at the beginning. 

*/

void selection_sort(int arr[], int n){
    for(int pos=0;pos<=n-2;pos++){
        int current=arr[pos];
        int min_position=pos;

        // find out the smallest element
        for(int j=pos;j<n;j++){
            if(arr[j]<arr[min_position]){
                min_position=j;
            }
        }

        // swap outside the loop
        swap(arr[min_position],arr[pos]);
    }
}


int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    selection_sort(arr,n);

    for(auto x:arr){
        cout<<x<<",";
    }
    return 0;
}