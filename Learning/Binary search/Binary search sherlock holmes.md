## 🔎 Binary Search - The Sherlock Holmes of Searching 🔎
"Why look through everything when you can just slice the problem in half every time like a coding ninja?” 🥷💡

### 📦 The Problem: 
You have a sorted array, and you want to find a specific number. Do you:
A) Check every number one by one like a snail? 🐌
B) Cut the list in half each time like a boss? 💼
Binary Search is B. Always be B.

### 🧠 Intuition:
Imagine guessing a numer between 1 and 100:
- You guess 50. To high?
- Try 25. Too low?
- Try 37. Getting warmer!
Boom. That's binary search - eliminating half the search space in every move. 🧊🔪

### Time Complexity:
| Case | Time |
| ---- | ---- |
| Best | O(1) - lucky guess!🍀 |
| Worst | O(log n) - halve every time 📉 |
🚫 Don't use it on unsorted arrays unless you wants to gaslight yourself. 🤯

### 🔄 Variations You'll see in Interviews:
1. First or last occurrence of a number
2. Number of times a sorted array is rotated
3. Search in a rotated sorted array (chef's kiss question 🤌)
4. Square root of a number without using sqrt()
5. Peak element in an array

### Pro Tips:
- Don't write mid = (left + right)/2 --> It may overflow!!
- Use mid = left + (right - left)/2 instead. 🧠
- Make sure your loop condition is left <= right (not < or ==)