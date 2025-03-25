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

// Time Complexity: O(N^2) --> Here we have two nested loops. The outer loop runs for N-1 times and the inner loop runs for N-1 times in the worst case.
// Space Complexity: O(1) --> Here we are not using any extra space. Hence the space complexity is O(1).
// Inplace: Yes --> Does not require any extra space or data structure. 
// Stable: Yes --> Bubble sort is a stable algorithm. It does not change the relative order of equal elements.
// Sorting In Place: Yes --> Bubble sort is an in-place algorithm. It does not require any extra space.
// Online: No --> Bubble sort is not an online algorithm. It does not work in an online manner. Means it does not work on a list of items that is too large to be stored in memory. The entire list must be present in memory before the sorting process begins.
// Adaptive: No --> Bubble sort is not an adaptive algorithm. It does not take into account the pre-sortedness of the array.
// When to use Bubble Sort: When the array is almost sorted or when the array is small.
// When not to use Bubble Sort: When the array is large or when the array is reverse sorted.
// Bubble sort is not a practical sorting algorithm when n is large.
// Bubble sort has a worst-case and average complexity of O(N^2) when n is large.
// Bubble sort is not a stable algorithm. It does not guarantee the relative order of equal elements.
// Bubble sort is an in-place algorithm. It does not require any extra space.
