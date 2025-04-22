## Recursion - When Function Call Themselves Like Narcissits
"Why do it yourself... when you can ask yourself to do it again... and again... and again?"

### 🎬 What is Recursion?
Recursion is when a function solves a small piece of the problem... and then calls itself to solve the rest.
- It's like saying:
    - "Hey me, can you solve this?"
    - "Sure, but first let me ask me to solve it..."
    - Inception music intensifies 🎵🌌

### 🧠 Real-World Analogy: Russian Dolls 🪆
Imagine you're opening a set of nested dolls:
- You open the biggest one.
- Inside is a slightly smaller one.
- Then another... until you get to the tiniest one - base case.
- Then you stack them all back up.
Recursion is exactly that. 🧠✨

### 📦 Anamoly of a Recursive Function
Every recursive function need two things:
1. Base case - When to stop calling itself.
2. Recursive case - The function calls itself with a smaller problem.

### Classic Example: Factorial
5! = 5x4x3x2x1=120
<pre> int factorial(int n) {
    if (n == 0) return 1; // base case 🛑
    return n * factorial(n - 1); // recursive case 🔁
}
</pre>

### Breakdown:
<pre> factoral(3)
      = 3 * factorial(2)
      = 3 * 2 * factorial(1)
      = 3 * 2 * 1 * factorial(0)
      = 3 * 2 * 1 * 1
      = 6
</pre>

### 🧨 Common Mistake: No Base Case = Infinite Loop = 💀
<pre> int broken(int n){
    return broken(n-1); // where is the STOP!? 😱
} </pre>

Bro, this is gonna be disaster to be honest!!!

### 🕒 Time Complexity (for factorial):
- Time: O(n)
- Space: O(n) (Each function call sits on the call stack, chillin' until it's resolved)

