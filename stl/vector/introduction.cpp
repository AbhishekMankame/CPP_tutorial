#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cout<<"Enter the size of the vector: ";
    cin>>n;
    cout<<"Enter the elements of the vector: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"The elements of the vector are: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}