## Sliding Window Technique - "Why recalculate what you already know?"
Imagine you're looking through a fixed-sized window while driving past a landspace... instead of stopping and rechecking everything, you just slide your view forward. 🏞️🚗

### 🧠 The Core Idea:
Instead of using nested loops to check every subarray or substring again and again (ew, O(n^2)😫),
Sliding Window says:
    "Bro, we already looked at the previous window. Just adjust it a little bit and resue that info!" 🪟🧠

### 🔥 There are 2 main types of windows:
| Type | Use Case | Window Size |
| ---- | -------- | ----------- |
| Fixed Window | You know the size k beforehead | Constant (e.g. k=3) |
| Variable Window | You adjust the window size dynamically | Depends on problem condition |

### 📦 Example 1: Fixed Sliding Window
Find maximum sum of subarray of size k
### ✨ Brute Force:
<pre> // O(n*k) - the slow like a turtle
for(int i=0;i<=n-k;i++){
    int sum=0;
    for(int j=i;j < i+k;j++){
        sum+= arr[j];
    }
    maxSum  =max(maxSum, sum);
} </pre>
🤢 Recalculates the sum from scratch every time.

### Sliding Window Version (O(n)):
<pre> int maxSum(vector<int>& arr, int k){
    int windowSum = 0;
    int maxSum = INT_MIN;
     for(int i=0;i < k; i++) windowSum += arr[i]; // First window
     maxSum=windowSum;
     for (int i=k;i < arr.size();i++){
        windowSum += arr[i] - arr[i - k]; // Slide the window
        maxSum = max(max,windowSum);
     }
     return maxSum;
} </pre>

### 🧙 What's Happening?
- Add new element to the window
- Subtract the one that's now out of view
- Keep the sum updated without full recalculation
Think of it like moving your camera to the right without setting it up again every time 🎥➡️

### 🧩 Example 2: Variable Sliding Window
Find the longest substring without repeating characters (🔥LeetCode classic)
<pre> int lengthOfLongestSubstring(string s) {
    unordered_set<char> seen;
    int left=0,right=0,maxLen=0;
    while(right < s.length()) {
        if(seen.find(s[right])==seen.end()) {
            seen.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
            right++;
        }
        else {
            seen.erase(s[left]);
            left++;
        }
    }
    return maxLen;
}