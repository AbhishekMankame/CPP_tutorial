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