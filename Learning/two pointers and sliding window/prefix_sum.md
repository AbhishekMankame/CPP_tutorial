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