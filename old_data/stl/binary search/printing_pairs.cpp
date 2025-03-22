#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void printAllPairs(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            cout<<"{"<<i<<","<<j<<"}"<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    printAllPairs(arr,n);

}

// Time complexity is O(N^2) as we are using nested loops
// Space complexity is O(1) as function does not use any extra space apart from few integer variables (i,j)