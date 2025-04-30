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