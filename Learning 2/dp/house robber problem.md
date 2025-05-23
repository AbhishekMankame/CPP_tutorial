## 🏠💰The House Robber Problem - Bob Edition
### 🎩The Story of Bob, the Gentleman Robber
Bob is now... Bob the Robber! But don't worry, he's a gentleman burglar - he only robs from greedy billionaires (think of it as... wealth distribution).😎<br>
He finds a row of houses, each with some money. But there's a catch:
<pre> If he robs two adjacent houses, the alarm goes off, and he ends up in jail.</pre>
So the problem is:
<pre> "Given a list of houses with money, what's the maximum amount Bob can rob without robbing two neighbours?"

### 🧠 Bob Thinks...
Let's say he's at house `i`. He has two choices:
1. Rob it 💰 -> Then skip the next house and add the amount from house `i` to the best he can do from house `i-2`.
2. Skip it 🏃-> Just take the max he could've robbed from house `i-1`.

So the recurrence becomes:
<pre>dp[i] = max(dp[i-1], nums[i] + dp[i-2]) </pre>

### 🧾 Let's See an Example:
<pre> Houses: [2, 7, 9, 3, 1] </pre>
Bob's plan:

- House 0: Rob 2
- House 1: Max(2, 7) = 7
- House 2: Max(7, 9+2) = 11
- House 3: Max(11, 3+7) = 10
- Houes 4: Max(11, 11+1) = 12<br>
So Bob can steal $12 safely 💸