#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/* Counting sort
Counting sort is a sorting technique based on keys between a specific range. 
It works by counting the number of objects having distinct key values (kind of hashing). 
Then doing some arithmetic to calculate the position of each object in the output sequence. 

Let us understand it with the help of an example.
For simplicity, consider the data in the range 0 to 9. 
Input data: 1, 4, 1, 2, 7, 5, 2
    1) Take a count array to store the count of each unique object. 
    Index: 0 1 2 3 4 5 6 7 8 9
    Count: 0 2 2 0 1 1 0 1 0 0

    2) Modify the count array such that each element at each index stores the sum of previous counts.
    Index: 0 1 2 3 4 5 6 7 8 9
    Count: 0 2 4 4 5 6 6 7 7 7

    The modified count array indicates the position of each object in the output sequence. 

*/

void counting_sort(int arr[], int n){
    // Largest Element
    int largest = -1;
    for(int i=0;i<n;i++){
        largest=max(largest,arr[i]);
    }

    // Create a count array/vector
    //int *freq=new int[largest+1] --> This is dynamic array creation
    vector<int> freq(largest+1,0);

    // Update the freq array
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    /* The above update frequency code can also be written as
    
    for(int i:arr){
        freq[i]++;
    }
    */

    // Put back the elements from freq into the original array 
    int j=0;
    for(int i=0;i<=largest;i++){
        while(freq[i]>0){
            arr[j]=i;
            freq[i]--;
            j++;
        }
    }

}

int main(){
    int arr[] = {88,97,10,12,15,1,5,6,12,5,8};
    int n=sizeof(arr)/sizeof(int);
    counting_sort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

/*Let's talk about complexities
Time complexity: O(n+k) where n is the number of elements in input array and k is the range of input. 
Auxiliary Space: O(n+k)
The main disadvantage of counting sort is that it is not useful when the range of input data is very large.

*/