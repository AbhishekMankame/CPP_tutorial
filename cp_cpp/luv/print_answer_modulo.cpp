#include<bits/stdc++.h>
using namespace std;

/*Modular Arithmetics
--> (a+b)%M = ((a%M)+(b%M))%M
--> (a*b)%M = ((a%M)*(b%M))%M
--> (a-b)%M = ((a%M)-(b%M)+M)%M  // Here we added M to avoid the negative value
--> (a/b)%M = ((a%M)*(b^-1)%M)%M // Here b^-1 is multiplicative inverse of b

*/

/* Given a number N. Print it's factorial. Print answer modulo 10^9+7.
Constraints
1<=N<=100
*/

// Significance of M=10^9+7 ---> It is very close to integer maximum




int main(){
    int n;
    cin>>n;
    int M=47;
    long long fact=1;
    for(int i=2;i<=n;i++){
        fact=(fact*i)%47;
    }
    cout<<fact<<endl;

    return 0;
}