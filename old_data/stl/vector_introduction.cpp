#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3};
    cout << v[0] << endl;

    vector<int> v2(3, 50);
    for(int i : v2){
        cout << i <<endl;
    }

    vector<char> v3= {'a', 'e', 'i', 'o', 'u'};
    for(char i: v3){   // for each loop
        cout<< i<<endl;
    }
    cout<<v3.size()<<endl;
    v2.pop_back(); // pop back mei last index waali value remove ho jaati ha
    for(int i:v2){
        cout<<i<<" ";
    }
    cout<<endl;
    v2.push_back(100); // push back mei last index waali value add ho jaati hai
    for(int i:v2){
        cout<<i<<" ";
    }
    return 0;
}