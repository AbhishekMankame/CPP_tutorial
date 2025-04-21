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