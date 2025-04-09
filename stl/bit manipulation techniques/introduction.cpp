#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;


/*Bit Manipulation techniques

--> Reason why we use bitwise operator is that they operate on the binary representation of the data. 
--> It is fast as compared to non bitwise operators

==> Different types of bitwise operators are:
--> Binary AND &
--> Binary OR |
--> Binary XOR ^
--> Binary One's Complement ~
--> Binary Left Shift <<
--> Binary Right Shift >> 

==> Binary AND &
0&0 = 0
0&1 = 0
1&0 = 0
1&1 = 1



*/

int main(){
    cout<<"Bitwise AND "<<endl;
    int a = 5;
    int b=6;
    int result = a&b;
    cout<<"a&b = "<<result<<endl;

    return 0;
}