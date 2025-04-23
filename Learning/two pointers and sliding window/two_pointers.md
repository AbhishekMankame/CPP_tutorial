## 🧠 Two Pointers Technique - "Two friends solving the problems by walking across an array"
"Why use one pointer when you can double the chaos and double the speed?" 🤝💥

### 🎬 Picture this:
You've gor an array, and you want to do something smart with it - maybe find pairs, move things, or do some magical shrinking and expanding.
Instead of looping through with just one index, you say:
    "Let me call in backup." 👯
Now you have two pointers:
- One starts from the beginning ➡️
- The other starts from the end ⬅️
- Or they both start at the beginning and race across like Marion Kart 🏁🚗

### 📦 When to use it:
✅ Sorted arrays
✅ Finding pairs that add up to something
✅ Removing duplicates
✅ Merging arrays
✅ Reversing stuff
✅ Palindrome checking
✅ Partitioning before quicksort (oh yes, it's there too)

### ⚔️ Classic Example 1: Find if a pair sums to X
<pre> bool hasPair(int arr[], int n, int target){
    int left=0, right=n-1;
    while(left < right){
        int sum=arr[left] + arr[right];
        if(sum==target) return true;
        else if (sum < target) left++;
        else right--;
    }
    return false;
}   </pre>