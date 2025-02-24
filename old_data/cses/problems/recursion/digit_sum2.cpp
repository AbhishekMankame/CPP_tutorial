#include<bits/stdc++.h>
using namespace std;

// digit sum
// digit_sum --> digit_sum(n/10)
// 1234 --> 4 + digitsum(123)

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

int digit_sum(int n){
    if(n==0){
        return 0;
    }
    return digit_sum(n/10)+(n%10);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    int n;
    cin>>n;
    cout<<digit_sum(1234)<<endl;

    
    return 0;
}

// complexity:
// 1. Number of function calls -> number of digits in n
// 2. What is complexity of each function -> O(1)
// log(n)