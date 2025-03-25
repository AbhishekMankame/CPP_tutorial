#include<iostream>
#include<vector>
using namespace std;

// Bubble sort:
// --> Bubble sort is a simple sorting algorithm that works by repeatedly stepping through the list, comparing each pair of adjacent items and swapping them if they are in the wrong order.
// --> The pass through the list is repeated until no swaps are needed, which indicates that the list is sorted.
// --> The algorithm gets its name from the way smaller elements "bubble" to the top of the list.
// --> Bubble sort is not a practical sorting algorithm when n is large.
// --> Bubble sort has a worst-case and average complexity of O(N^2) when n is large.

// Key Idea of Bubble Sort: Take larger element to the end by repeatedly swapping the adjacent elements.

void bubble_sort(int a[], int n){
    for(int times=1;times<=n-1;times++){  // repeat this work N-1 times
        //repeated swapping
        for(int j=0;j<n-times-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);

            }
        }
    }
}

int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    return 0;
}

// Time Complexity: O(N^2)
// Space Complexity: O(1)