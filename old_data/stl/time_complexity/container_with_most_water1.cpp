#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*Container with most water
This is leetcode question: 11, here we are given n non-negative integers or heights in the form of an array.
Each integer represents the height of a vertical line at the position i where the width of each line is 1.
We need to find two lines, which together with the x-axis forms a container, such that the container can hold the maximum water.abort
Constraints: n==height.length
            2<=n<=10^5
            0<=height[i]<=10^4

Topics: Array, Two Pointers, Greedy

*/

// Let's solve it using Brute Force Approach

int maxArea(vector<int>& height){
    int mw=0;  // mw is the maximum water means answer for our problem
    for(int i=0;i<height.size();i++){
        for(int j=i+1;j<height.size();j++){
            int w=j-i;
            int h=min(height[i], height[j]);
            int area=w*h;
            mw=max(mw, area);
        }
    }

    return mw;
}


int main(){
    vector<int> height={1,10,6,2,5,4,8,10,7};
    cout<<maxArea(height)<<endl;

    return 0;
}

/* Here we have used brute force approach to solve this question
Now let us talk about the time complexity of this code:
1. We are using two nested loops to iterate over the height array.
2. Hence, the time complexity of this code is O(N^2) where N is the size of the height array.
Here, we can see that the time complexity of this code is not optimized and it is not running in linear time.

Let us talk about the space complexity of this code:
1. We are using only a few variables to store the maximum water and the area.
2. Hence, the space complexity of this code is O(1) --> Constant space complexity.

// IMPORTANT NOTE: When we submit this code in Leetcode, it will give us TLE (Time Limit Exceeded) because here in the constraint it is given that the value of n is 10^5
// and we know that to run or execute any code we need 10^8 operations and here as n=10^5 ==> n^2=10^10 which is greater than 10^8.
// Hence, this code will give TLE, so we need to use the approach which has the time complexity of O(logN) or O(N) approach.

*/