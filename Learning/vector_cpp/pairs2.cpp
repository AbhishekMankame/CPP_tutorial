#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int arr[] = {10, 5, 2, 3, -6, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = 4;
    sort(arr,arr + n);
    int i=0, j=n-1;
    while(i<j){
        if(arr[i] + arr[j] > s){
            j--;
        }
        else if(arr[i] + arr[j] < s){
            i++;
        }
        else {
            cout<<"["<<arr[i]<<","<<arr[j]<<"]"<<endl;
        }
    }
}