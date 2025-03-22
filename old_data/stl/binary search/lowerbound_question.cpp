#include<iostream>
#include<vector>
using namespace std;

/* Lower Bound
Given an array of integers A (sorted) and a integer val.
Implement a function that takes A and val as input parameters and returns the lowerbound of the val
Note: If val is not present in array then lower bound of a given integer means integer which is just smaller than given integer. Otherwise val itself is the answer.
If val is less than smallest element of array A then return '-1' in that case.
*/

int lowerBound(vector<int> A, int val){
    int s=0, e=A.size()-1, ans=-1;

    while(s<=e){
        int mid=(s+e)/2;
        if(A[mid]<=val){
            ans=A[mid];
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }

    return ans;
}

int main(){
    vector<int> B={-3,-1,0,5,7,8};
    int val1=6;
    cout<<lowerBound(B,val1)<<endl;

    return 0;
}