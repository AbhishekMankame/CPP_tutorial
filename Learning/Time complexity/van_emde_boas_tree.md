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