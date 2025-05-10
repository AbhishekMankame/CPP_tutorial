## 🎢 Welcome to "GraphLand" - Where Nodes Have Feelings Too
Imagine a theme park called GraphLand, where every node (person) is trying to connect with other nodes (friends) via edges (handshakes, secrets, love letters, etc). Now let's explore the math with stories!

### 🎉 1. Handshaking Theorem:
<pre>
"If everyone in the party shakes hands, how many hands are shaken?"
</pre>
💬 The Rule:<br>
Every edge is like a secret handshake between two people. So, if we sum all the handshakes each person hand, it's double the actual number of secret handshakes!<br>
📏 Formula:
<pre>Sum of all degree = 2 x number of edges </pre>

### 👀 Example:
Imagine 4 friends:<br>
- Alice shook hands with 2 people
- Bob with 1
- Charlie with 2
- Dora with 1<br>
Total = 2 + 1 + 2 + 1 = 6<br>
So `Edges = 6 / 2 = 3`

### 🧠 Used in:
- Checking if your input graph makes sense
- Finding how many edges exist just by counting degrees

### 🌳 2. Trees: "Connected but Drama-Free"
<pre>A tree is a friend circle where everyone is connected, but no drama loops (a.k.a. cycles) exist.</pre>
📏 Maths Facts:

- Tree with `N` nodes han `N - 1` edges
- If edges >= N --> somebody is spreading rumors (a cycle exists!)<br>
🌴Think of it like a drama-free Whatsapp group: no backstabbing, no love triangles, just direct messaging only.