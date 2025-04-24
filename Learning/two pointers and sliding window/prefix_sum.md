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
<pre> vector< long long > buildPrefix(const vector<< int >& nums){
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