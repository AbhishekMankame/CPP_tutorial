/*
This is a Codeforces problem


Let's call a positive integer n
 ordinary if in the decimal notation all its digits are the same. For example, 1
, 2
 and 99
 are ordinary numbers, but 719
 and 2021
 are not ordinary numbers.
 
 For a given number n
, find the number of ordinary numbers among the numbers from 1
 to n
.

Input:
The first line contains one integer t
 (1≤t≤104). Then t
 test cases follow.

Each test case is characterized by one integer n
 (1≤n≤109
).

Output:
For each test case output the number of ordinary numbers among numbers from 1
 to n


 Tutorial:
 Note that every ordinary number can be represented as d⋅(100+101+…+10k)
. Therefore, to count all ordinary numbers among the numbers from 1
 to n
, it is enough to count the number of (d,k)
 pairs such that d⋅(100+101+…+10k)≤n
. In the given constraints, it is enough to iterate over d
 from 1
 to 9
 and k
 from 0
 to 8
.
.*/

#include<bits/stdc++.h>
using namespace std;
using ll = long long int;


void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    int n;
    cin>>n;
    int res=0;
    for(ll pw=1;pw<=n;pw=pw*10+1){
        for(int d=1;d<=9;d++){
            if(pw*d<=n){
                res++;
            }
        }
    }
    cout<<res<<endl;
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