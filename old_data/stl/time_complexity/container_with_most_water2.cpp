#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*Container with most water using Two Pointers Approach
Ab yaha pe hum brute force approach ki jagah two pointers approach ka use karenge.
Two pointers approach ka use karne se hum O(N) time complexity me answer nikal sakte hai.
Two pointers approach ka use karne se hume ek left pointer aur ek right pointer use karna hota hai.
Yaha pe hum left pointer ko 0th index pe aur right pointer ko last index pe initialize karenge.

*/

// Let's solve it!!!!

int maxArea(vector<int>& height){
    int mw=0; // mw is the maximu water matlab yahi humara answer hoga
    int lp=0;
    int rp=height.size()-1;
    while(lp<rp){
        int w=rp-lp;
        int ht=min(height[lp], height[rp]);
        mw=max(mw, w*ht);
        height[lp]<height[rp]?lp++:rp--;
    }
    return mw;
}

int main(){
    vector<int> height={1,10,6,2,5,4,8,3,6};
    cout<<maxArea(height)<<endl;
}

/* Let's discuss about the space and time complexity
Here we are using two pointers approach to solve this question.
Let's talk about the time complexity of this code:
1. We are using only one while loop to iterate over the height array.
2. Hence, the time complexity of this code is O(N) where N is the size of the height array.
Here, we can see that the time complexity of this code is optimized and it is running in linear time.



*/