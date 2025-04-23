### 🥊Sliding Window vs. Kadane's Algoritm
Let's settle it once and for all:
👉 Is the Sliding Window version of maximum subarray sum the same as Kadane's Algorithm?

### 🤹 Sliding Window (Fixed Size):
This is used when you are told:
    <pre> "Hey bro, give me the max sum of any subarray of size exactly k." </pre>
Example:
<pre> int maxSum = maxSumOfSizeK(arr,k); // k is fixed </pre>
You maintain a window of size k, slide it across, keep updating the sum.
This is classic Fixed Sliding Window.
⚠️ Window size is always the same!

### ⚡Kadane's Algorithm:
Used when the question is:
    <pre> "What's the maximum sum of any subarray?"
    (i.e., size is not fixed) </pre>

### 🔥 Code:
<pre> int kadane(vector<int>& arr) {
    int maxSum = arr[0];
    int currentSum = arr[0];

    for(int i=1; i < arr.size(); i++){
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}