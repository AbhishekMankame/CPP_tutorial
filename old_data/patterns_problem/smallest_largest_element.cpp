#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    // To check the smallest and largest element in the array
    int nums[5]={1,2,3,4,5};
    int size=5;
    int smallest=INT_MAX, largest=INT_MIN;
    cout<<"Largest possible number is "<<INT_MAX<<endl;
    cout<<"Smallest possible number is "<<INT_MIN<<endl;
    for(int i=0;i<size;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
        }
        if(nums[i]>largest){
            largest=nums[i];
        }
    }
    cout<<"Smallest element in the array is "<<smallest<<endl;
    cout<<"Largest element in the array is "<<largest<<endl;

    // To check the smallest and largest element in the array using inbuilt functions
    int nums1[5]={1,2,3,4,5};
    int size1=5;
    int smallest1=*min_element(nums1,nums1+size1);
    int largest1=*max_element(nums1,nums1+size1);
    cout<<"Smallest element in the array is "<<smallest1<<endl;
    cout<<"Largest element in the array is "<<largest1<<endl;

}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    solve();

    
    return 0;
}