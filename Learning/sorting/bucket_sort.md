## 🪣BUCKET SORT - The Pool Party of Sorting🎉🏊‍♂️
### 🎯What is Bucket Sort?
Imagine you're the boss of a massive summer pool party 🌞🏖️, and you have a crowd of guests (numbers) coming in. <br>
But OH NO!😱 They are of different heights (values). <br>
You can't just throw them all in the same pool - so you create buckets (different pools🏊‍♂️) based on their height range!
<pre>"Small kids go here, tall dudes goes there, medium bros chill over there!" 😂</pre>

- Seperate them smartly into different pools.
- Organize each pool individually.
- Bring them back together nicely in a line = Sorted Order!🔥

---

### 🧠Step-by-Step Real World Analogy:
1. Create Buckets ➡️ Different swimming pools for different height ranges. 🏊‍♂️🏊‍♂️
2. Scatter Guests ➡️ Short kids in Kiddie Pool, tall guys in Deep Pool 🛝🌊
3. Sort Each Bucket ➡️ Arrange guests nicely inside each pool (may be tallest to shortest inside each).📏
Merge Buckets ➡️ Form the final lineup for the Big Pool Party Photo! 📸🎉

### 🧃EASY Example:
You have these floats:
<pre> arr[] = {0.23. 0.45, 0.12, 0.67, 0.34, 0.89, 0.38}</pre>

Since numbers are between `0` and `1`, make 10 buckets (`bucket index = value * 10`)
| Number | Bucket |
| ------ | ------ |
| 0.23 | Bucket 2 |
| 0.45 | Bucket 4 |
| 0.12 | Bucket 1 |
| 0.67 | Bucket 6 |
| 0.34 | Bucket 3 |
| 0.89 | Bucket 8 |
| 0.38 | Bucket 3 |

### 🎉 Pool Party Action:
- Bucket 1: [0.12] 🛝
- Bucket 2: [0.23] 🏖️
- Bucket 3: [0.34, 0.38] 🌴
- Bucket 4: [0.45] 🌊
- Bucket 6: [0.67] 🧜‍♂️
- Bucket 8: [0.89] 🐬

---

✅ Sort inside each bucket if needed (tiny sorting like Insertion Sort ✅)<br>
✅ Join buckets one after another ➡️ Sorted Array!
<pre> Sorted: 0.12, 0.23, 0.34, 0.38, 0.45, 0.67, 0.89</pre>

### 🛠️ C++ -ish Steps:
1. Find maximum and minimum values to understand range.
2. Create an array of buckets.
3. Distribute elements into appropriate buckets.
4. Sort each bucket individually (Insertion Sort is usually used inside!).
5. Concatenate all buckets back to a single array.