/*
Vector:
Vectors are sequence containers representing arrays that can change in size.
Just like arrays, vectors use contiguous storage locations for their elements, which means that their elements can also be accessed directly in O(1) time.
But unlike arrays, their size can change dynamically, with their storage begin handled automatically by the container.
*/

/*General Complexity of push_back() is O(1)
But in some cases it can also be O(n)

Amortized for every insertion

O(N) ---> N (for N elements)
O(1) ---> (N/N=1)

Complexity:
Constant (amortized time, reallocation may happen).
If a reallocation happens, the reallocation is itself up to linear in the entire size.
*/

#include<bits/stdc++.h>
using namespace std;
//#define kaushal(n) cout<<n<<endl

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    int a=100;
   // kaushal(a);

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