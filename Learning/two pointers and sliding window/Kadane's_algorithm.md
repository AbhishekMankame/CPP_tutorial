## ⚡Kadane's Algorithm - Maximum Subarray Sum
<pre> "When life throws negative numbers at you, Kadane teaches you when to let go 💁‍♂️" </pre>

### 🧠 What is Kadane's Algorithm?
Kadane's Algorithm is a beautiful and elegant solution to one of the most classic problems in computer science:
<pre>🔍Find the maximum sum of a contiguous subarray in a given array of integers (which can include negative numbers too).</pre>
This algorithm doesn't just solve the problems - it absolutely DESTROYS the brute-force methods in terms of performance.

### 💣 The Brute-Force Pain
If you try every possible subarray (like a curious brute-force caveman🔨), you'll end up doing:
- O(n^2) or even O(n^3) operations 😨
- Nested loops, recalculations, tears and regrets 😭
But Kadane says:
<pre> "Let's walk through the array once, and figure it out smartly. No drame. Just results." 🕶️</pre>

### ⚙️ The Kadane Thought Process
Imagine you're walking through the array while carrying a magical bag 🎒 that stores the sum of your current subarray.
At every step, you ask:
<pre> "Should I extend this subarray by including this number?"
"Or should I drop it all and start fresh from this number?"</pre>
Kadane's brilliant twist is:
<pre>currestSum = max(nums[i],currentSum + nums[i]); </pre>
This line is basically says:
- "If adding this element helps, cool - keep going. 💪”
- "If it makes things worse, drop the baggage - let's start over. ✂️”
Then, all we do is keep track of the maximum sum we've seen so far!