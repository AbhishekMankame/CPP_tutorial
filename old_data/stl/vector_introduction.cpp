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
    for(char i: v3){
        cout<< i<<endl;
    }
    return 0;
}