## 📚 Why You Can't Sort Faster Than O(n log n) - With Math Magic
### 1. 🎯 The Key Question
When you sort using comparisons,<br>
you are basically building a decision tree (aka a flowchart of decisions):
- Each node is a comparison ("is A < B?").
- Each branch is a yes/no answer.
- Each leaf (end of branch) is a final sorted order.

So: <br>
✔️ Each final sorted array = one leaf in the decision tree. 🌳

### 2. How Big is the Tree?
For n elements, there are exactly n! possible sorted orders.<br>
Thus, the decision tree must have at least n! leaves. <br>
(One unique leaf for every possible sorted result.)

### 3. 🔥How Tall is the Tree?
Basic rule in CS:
- In a binary decision tree (only yes/no),
- If the tree has L leaves,
- Then the minimum height(depth) is atleast:
<pre> height >= log L </pre>
Since here L = n!,<br>
thus:
<pre> height >= log (n!)</pre>
Meaning: at least log(n!) comparisons are needed in the worst case. 📈