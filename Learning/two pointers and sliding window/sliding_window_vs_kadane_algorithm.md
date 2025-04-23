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