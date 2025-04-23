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

🎩 Trick: Array must be sorted
🎯 Stratergy:
- If the sum is too small -> move left forward
- If the sum is too big -> move right backward
- If it's just right -> you win! 🍰

### Example 2: Reverse an Array In-Plcae
<pre> void reverse(vector<int>& arr){
    int i=0,j=arr.size()-1;
    while(i < j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
} </pre>
Here, the two pointers are closing in like long-lost lovers in a rom-com 🥹💞

### Example 3: Move all zeros to the end
<pre> void moveZeros(vector<int>& nums) {
    int left=0;
    for(int right=0;right < nums.size(); right++){
        if(nums[right]!=0){
            swap(nums[left], nums[right]);
            left++;
        }
    }
} </pre>
Two pointers are doing a delicate "let's move the good stuff forward, gently push the trash (zeros) back" operation. 🧹🧼

### Real Life Analogy:
Imagine you're looking for the right Netflix show with a friend.
You both scroll from opposite ends of the list - if neither of you agrees, you move closer.
When you both land on "Breaking Bad" - boom, match found. 🍿📺

### ☠️ Mistake to Avoid:
🚫 Using it when the array isn't sorted (for sum-related problems)
🚫 Forgetting to update both pointers correctly
🚫 Getting stuck in an infinite loop (classic rookie move 👶)