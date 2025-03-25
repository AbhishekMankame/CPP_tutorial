#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/* Insertion Sort
Insertion sort is a simple sorting algorithm that works the way we sort playing cards in our hands. 
Insert the card in its correct position in a sorted part.
It is a simple sorting algorithm that builds the final sorted array (or list) one item at a time.
It is much less efficient on large lists than more advanced algorithms such as quick sort, heap sort or merge sort.
*/

// sort the elements in the increasing order
void insertion_sort(int a[], int n){
    for(int i=1;i<n;i++){
        int current=a[i];
        int prev=i-1;
        // loop to find the right index where the element current should be inserted
        // If the element is smaller than the current element then shift the element to the right
        // and keep on shifting the elements to the right until we find the correct position
        while(prev>=0 and a[prev]>current){
            a[prev+1]=a[prev];
            prev=prev-1;
        }
        a[prev+1]=current;
    }
    
}

int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    insertion_sort(arr,n);

    for(auto x:arr){
        cout<<x<<",";
    }
}