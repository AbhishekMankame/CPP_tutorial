## ⚡Prefix Sum - Turning O(n^2) headaches into O(n) elegance
<pre> "Why re-add numbers you've aleady added? Keep a running tab like a smart cafe owner." ☕📈 </pre>

### 🧠 What's Prefix Sum?
For an array arr, a prefix sum array pref is defined as:
<pre> pref[i] = arr[0] + arr[1] + ... + arr[i] </pre> 
So pref[i] stores the total of everything upto index i

### 🚀 Core Super-Power
Want the sum of a subarray [l ... r]?
<pre> sum(l,r) = pref[r] - pref[l-1] // O(1)</pre>
(if l == 0, just use pref[r])
One pre-compute pass --> O(n), then unlimited range queries in O(1) each. 💅

### 🛠️ Building the Prefix Array (C++)
<pre> vector< long long > buildPrefix(const vector< int >& nums){
    int n = nums.size();
    vector< long long > pref(n);
    pref[0] = nums[0];

    for(int i = 1; i < n; ++i){
        pref[i] = pref[i-1] + nums[i];
    }
    return pref;
} </pre>

Time: O(n) Space: O(n)
(Use long long to dodge overflow monsters 🐉)

### 🎬 Example Walk-Through
<pre> nums = [2, 4, 1, 3, 5]
index = 0 1 2 3 4
pref = [2, 6, 7, 10, 15]    </pre>
Need sum of elements 1 ... 3 (<b> 4 + 1 + 3 = 8 </b>)
<pre> pref[3] - pref[0] = 10 - 2 = 8 ✅ </pre>

### 📦 Classic Interview Uses
| Problem Type | How Prefix Sum Helps |
| ------------ | -------------------- |
| Range Sum Query | Build pref once; each query in O(1) |
| Subarray Sum Equals k | Store (currentPref - k) in a hash-map to count matches (O(N)). |
| Find Pivot Index | For each i, check prefix[i-1] == total prefix[i]. |
| Largest Subarray with 0 Sum | Look for equal prefix sums at two indices |
| 2-D Matrix Sum | Extend to 2-D prefix table (a.k.a. "integral image") |

### 🧙‍♂️ Pro Tips & Variations
1. Space-Saver: If you only need rolling info, keep a single running sum (currPref) instead of fully array.
2. Difference Array: Reverse trick for first range updates - handy in competitive programming (lmos method).
3. Modulo Magic: For divisibility questions ("Subarray sum divisible by k"), store pref % k.
4. 2-D Prefix:
<pre> sum(x1,y1,x2,y2) = P[x2][y2] - p[x1-1][y2] - p[x2][y1-1] + p[x-1][y-1] </pre>

### 🏁TL;DR (too long; didn't read)
- Prefix sum = running total array.
- Builds in O(n); answers any range-sum query in O(1)
- Unlocks hash-map tricks for "subarray sum == k" and friends.
- Extends to 2-D for lightning-fast matrix queries.