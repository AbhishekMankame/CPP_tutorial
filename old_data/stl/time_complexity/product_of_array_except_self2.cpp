#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*Let us solve the product of array except self with optimal time complexity O(1) but here space complexity will be O(N) which is not optimized*/

vector<int> productExceptSelf(vector<int> &nums){
    int n = nums.size();
    vector<int> prefix(n,1), suffix(n,1), result(n,1);
    for(int i=1;i<n;i++){
        prefix[i]=nums[i-1]*prefix[i-1];
    }
    for(int i=n-2;i>=0;i--){
        suffix[i]=nums[i+1]*suffix[i+1];
    }
    for(int i=0;i<n;i++){
        result[i]=prefix[i]*suffix[i];
    }

    return result;
}

int main(){
    vector<int> nums = {1,2,3,4};
    int n=nums.size();
    vector<int> result = productExceptSelf(nums);
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
}

// Let's analyze the time complexity
// Here the time complexity is O(N) because we are traversing the array 3 times so it will be O(3N) as we can ignore the constant so it will be O(N)

// Let's analyze the space complexity
// Here the space complexity is O(N) because we are using 3 extra arrays of size N so it will be O(3N) as we can ignore the constant so it will be O(N)