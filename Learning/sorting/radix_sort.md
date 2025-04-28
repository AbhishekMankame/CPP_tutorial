## 🎡 RADIX SORT: The "Digit Disco Party" 🕺
### 🧠 What's the Main Idea?
Instead of comparing numbers directly (like Bubble Sort, Quick Sort do), Radix Sort says:<br>
👉 "Bro, why stress?<br>
Let's just sort the numbers based on their individual digits... from the least significant digit (LSD) to the most significant digit (MSD)!"<br>
(Translation: Start from the rightmost digit and move left.) <br>
Imagine you have numbers like:
<pre> 170, 45, 75, 90, 802, 24, 2, 66 </pre>
Instead of comparing numbers like 170 vs 45, we first look only at the ones place:
| Number | Ones digit |
| ------ | ---------- |
| 170 | 0 |
| 45 | 5 |
| 75 | 5 |
| 90 | 0 |
| 802 | 2 |
| 24 | 4 |
| 2 | 2 |
| 66 | 6 |