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

Now sort based on ones place!<br>
Then move to tens place... then hundreds place... and so on!

### 🎉Step-by-Step: The Dance Floor Moves
1. Find the maximum number - to know how many digits we need to process.<br>
(Ex: `802` -> 3 digits)
2. For each digit place (1s, 10s, 100s...):
- Apply Counting Sort based on that digit:

#### 💥Key Secret:
<pre> We must use Stable Sorting (like Counting Sort) so that order of equal digits stays same when moving to next digit!</pre>

### LIVE EXAMPLE:
Sort `[170, 45, 75, 90, 802, 24, 2, 66]`
- Pass 1: Sort by Ones Place<br>
(numbers ending digits)<br>

| Ones digit | Numbers |
| ---------- | ------- |
| 0 | 170, 90 |
| 2 | 802, 2 |
| 4 | 24 |
| 5 | 45, 75 |
| 6 | 66 |

After sorting by ones place:
<pre> 170, 90, 802, 2, 24, 45, 75, 66</pre>

- Pass 2: Sort by Tens Place

| Tens digit | Numbers |
| ---------- | ------- |
| 0 | 2, 802 |
| 2 | 24 |
| 4 | 45 |
| 6 | 66 |
| 7 | 75 |
| 9 | 90 |

After sorting by tens place:
<pre> 2, 802, 24,45, 66, 75, 170, 90</pre>

- Pass 3: Sort by Hundreds Place

| Hundreds digit | Numbers |
| -------------- | ------- |
| 0 | 2, 24, 45, 66, 75. 90 |
| 1 | 170 |
| 8 | 802 |

After sorting by hundreds place:
<pre>2, 24, 45, 66, 75, 90, 170, 802</pre>
Ta-Da! Fully Sorted! 🎉<br>
NO COMPARISONS between numbers! Only digits!

### 🚀 Radix Sort: Summary

| Property | Value |
| -------- | ----- |
| Time Complexity | O(d*(n + k)) |
| Space Complexity | O(n + k) |
| Stable | Yes ✅ |
| Comparison based? | No ❌ |

Where:
- d = number of digits in max number
- n = number of elements
- k = range of digits (0-9 for decimal)

### Funny Analogy:
Imagine organizing a school dance competition:
1. First, arrange students by shoe size (smallest first).
2. Then by hat size.
3. Then by height.

After these steps, you end up with the perfect lineup - WITHOUT anyone fighting about who's taller or who's cooler! 😂🎩👟<br>
That's Radix Sort!<br>
Sort by little parts -> gradually build the big order!

### 📜 TL;DR:
- Radix Sort sorts numbers digit-by-digit starting from the least significant digit.
- It uses Counting Sort internally for each digit.
- No comparisons between whole numbers - just looking at digits!
- Super fast for small number ranges and lots of data.
- Think of it as "sorting by small fields one at a time" - like postal codes, phone numbers, etc.