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

### 🔧 Basic Code (with Path Compression + Union by Rank)
<pre>
class DSU {
public:
    std::vector< int > parent, rank;

    DSU(int n){
        parent.resize(n);
        rank.resize(n, 0);
        for(int i=0;i < n; ++i) parent[i] = i;
    }

    int find(int x){
        if(parent[x]!=x)
            parent[x] = find(parent[x]); //Path Compression
        return parent[x]; 
    }

    void unite(int x, int y){
        int rx = find(x);
        int ry = find(y);
        if(rx == ry) return;

        if(rank[rx] < rank[ry])
            parent[rx] = ry;
        else if (rank[rx] > rank[ry])
            parent[ry] = rx;
        else{
            parent[ry] = rx;
            rank[rx]++;
        }
    }
};
</pre>

### ⚡️Time Complexity:
- Each `find` and `union` operation runs in O(a(N)), where `a` is the inverse Ackermann function -> practically constant.