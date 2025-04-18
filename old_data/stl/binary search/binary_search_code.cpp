#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int tar){
    int st=0;
    int end=arr.size()-1;

    while(st<=end){
        int mid=(st+end)/2;
        if(tar>arr[mid]){
            st=mid+1;
        }
        else if(tar<arr[mid]){
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;

}

int main(){
    vector<int> arr = {-1,0,3,4,5,9,12}; //with odd number of elements
    int tar1=12;
    cout<<binarySearch(arr,tar1)<<endl;

    vector<int> arr2={-1,0,3,5,9,12};
    int tar2=0;
    int tar3=40;

    cout<<binarySearch(arr2,tar2)<<endl;
    cout<<binarySearch(arr2,tar3)<<endl;


    return 0;
}