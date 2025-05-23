## 🐦✨What is Pigeonhole Sort?
Imagine you're organizing pigeons into holes 🕳️, and there's one pigeon per hole based on their "value".<br>
If you know the range of values is not too large, then this sort can do the job in O(n + range) time!

### 🔍When to Use?
- When the number of elements n ~ range of input values.
- Works great when the values are within a small, known, finite range.

### 🧠 Analogy Time:
Let's say we have a class of kids aged between 10 and 15:
- Ages: `[12, 10, 14, 11, 15, 13, 10]`
- Max age = 15, Min age = 10<br>
We create holes (buckets) labeled 10 to 15 and ask each kid to sit in their corresponding age hole.<br>
Once all kids are in, we ask them to come out in order from hole 10 to 15.<br>
Boom 💥- sorted ages!

### 💻 C++ Code:
<pre>
void pigeonholeSort(int arr[], int n){
    // Step 1: Find min and max
    int minVal = arr[0], minVal = arr[0];
    for(int i=1;i < n; i++){
        if(arr[i] < minVal) minVal = arr[i];
        if(arr[i] > maxVal) maxVal = arr[i];
    }
    int range = maxVal - minVal + 1;

    // Step 2: Create pigeonholes
    int holes[range] = {0};

    // Step 3: Put the pigeons in holes 🕊️
    for(int i = 0; i < n; i++){
        holes[arr[i] - minVal]++;
    }

    // Step 4: Pull pigeons out in order
    int index = 0;
    for(int i=0; i< range; i++){
        while(holes[i] --> 0){
            arr[index++] = i + minVal;
        }
    }
}

int main(){
    int arr[] = {8, 3, 2, 7, 4, 6, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Original array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    pigeonholeSort(arr, n);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
</pre>

### ✅ Summary Table
| Property | Value |
| -------- | ----- |
| Time Complexity | O(n + range) - Super fast if birds stay near each other |
| Space | O(range) - Need 1 cage per possible bird |
| Stable | ✅ Can be made stable - Yes but only if you build extra cages like a bird hotel 🏨|
| In-place | ❌ (Needs extra space for holes) - Not stable, we literally built cages!|
| Best Use Case | When range ~ n |

### ⚠️ Limitations:
- If range is much larger than `n`, it's wasteful (imagine 5 pigeons but 10000 😵).
- Needs extra space - not good for memory-sensitive tasks.

### 🪄 TL;DR Fun Wrap:
<pre>
"If each value gets its own cozy pigeonhole and values aren't flying all over the place (i.e. range is tight), then Pigeonhole Sort swoops in and gets the job done fast and feathery!" 🕊️✨ </pre>

