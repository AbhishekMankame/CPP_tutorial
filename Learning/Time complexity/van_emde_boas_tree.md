## van Emde Boas Tree
- I don't think this one is important for interview perspective, just came across this topic name, let's explore it bit 😁
- A van Emde Boas (vEB) is a tree based data structure that supports very fast operations for dynamic ordered sets - much faster than traditional binary search trees for small universes of keys.

### What is van Emde Boas Tree?
A van Emde Boas (vEB) tree is a recursive data structure designed to handle integers from a bounded universe (like 0 to u-1), where u is the size of the universe and must be a power of 2.

It supports:
- Insert
- Delete
- Search
- Successor
- Predecessor in O(log log u) time complexity!

### Why it is special?
- Most balanced binary search trees (like Red-Black Trees or AVL trees) have O(log n) time complexity.
- The van Emde Boas Tree improves this to O(log log u) where u is the universe size. If u is not very large (like <= 2^32), this is extremely fast!

### Operations Supported
| Operation | Time Complexity |
| --------- | --------------- |
| Insert | O(log log u) |
| Delete | O(log log u) |
| Search | O(log log u) |
| Predecessor | O(log log u) |
| Successor | O(log log u) |
| Min/Max | O(log log u) |

### Structure of vEB Tree
A vEB tree of universe size u has:
- min and max (stores the smallest and largest elements)
- summary (a smaller vEB tree summarixing which clusters are non-empty)
- clusters (an array of smaller vEB trees for parts of the universe)

It divides the universe like this:
- High part: which cluster an element belongs to
- Low part: index within that cluster

#### Code Example:
high(x) = floor(x/sqrt(u))
low(x) = x%sqrt(u)
index(high,low) = high * sqrt(u) + low

#### Example: Universe u=16
You divide it int sqrt(u)=4 clusters of size sqrt(u)=4.
So x=13 would go to cluster high(13)=floor(13/4)=3, with a local index low(13)=1.

#### Use cases
-  When you need fast predecess/successor queries (e.g., in computational geometry).
- When your key space is bounded and not too large, e.g., 32-bit integers.

#### Limitations
- It only works if keys are from a fixed universe.
- Has high space complexity: O(u), though optimized versions can reduce this.

