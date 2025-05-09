## ⚔️ Disjoint Set Union (DSU) / Union-Find

### 🧠What is it?
DSU is a data structure used to track a set of elements split into disjoint (non-overlapping) groups. <br>
It answers two main questions efficiently:
1. Are two elements in the same group? (`find`)
2. Combine two groups into one. (`union`) <br>
It's lightning fast when optimized, and helps solve problems involving connectivity, grouping and components.

### 🧵Real-World Analogy: "Friend Circles"
Imagine everyone in a room starts as their own little friend circle (singleton set). As people meet and become friends:
- We merge circles (`union`)
- Later, we can check if two people are somehow connected (`find`) <br>
Over time, friend circles grow, and you want to check who belongs to which.