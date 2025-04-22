## 🧠 The Call Stack - Your Program's Brain RAM 🤯📞
"When function calls go to chill... until they're done. It's like a queue but upside down and way more dramatic." 🎭🔁

### 🤔 What even is the call stack?
Imagine your brain is handling tasks like this:
- You're writing a message 📝
- While writing, you remember to grab coffee ☕
- While grabbing coffee, you realize you forgot to feed your cat 🐱
- Now your brain is like:
    1. First feed the cat
    2. Then get the coffee
    3. Then go back to writing the message
You're stacking tasks, and once one is done, you "pop" back to the previous one.
📦 That's exactly how the call stack works.

### Key Rule:
Last In, First Out (LIFO)
Like stacking Pringles - the last one you put in is the first one you eat.

### Code Example (Recursion + Call Stack)
<pre> int foo(int n){
    if(n==0) return 0;
    return n + foo(n-1);
}
</pre>

Let's call foo(3):
<pre> foo(3)
        -> foo(2)
            -> foo(1)
                -> foo(0) = 0 ✅ [BASE CASE]

        Now it unwinds:
                    foo(1) = 1 + 0 = 1
                foo(2) = 2 + 1 = 3
            foo(3) = 3 + 3 = 6
</pre>
Each function waits on top of the call stack for the one it called to finish.