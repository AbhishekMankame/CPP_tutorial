## Sliding Window Technique - "Why recalculate what you already know?"
Imagine you're looking through a fixed-sized window while driving past a landspace... instead of stopping and rechecking everything, you just slide your view forward. 🏞️🚗

### 🧠 The Core Idea:
Instead of using nested loops to check every subarray or substring again and again (ew, O(n^2)😫),
Sliding Window says:
    "Bro, we already looked at the previous window. Just adjust it a little bit and resue that info!" 🪟🧠

### 🔥 There are 2 main types of windows:
| Type | Use Case | Window Size |
| ---- | -------- | ----------- |
| Fixed Window | You know the size k beforehead |
| Variable Window | You adjust the window size dynamically | Depends on problem condition |