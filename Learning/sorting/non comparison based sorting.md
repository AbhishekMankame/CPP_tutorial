## Counting Sort: The Super Efficient Coin Sorter

Imagine this scenario... 🏦💰
You are a super-organized cashier at a mega mall (yeah, you're basically a sorting legend). Every customer who comes to your counter gives you coins of different values (1,2,3... maybe even 10!). Now, you've got a huge pile of coins and you need to sort them. But, here's the twist: You're too cool for comparisons. You don't care about comparing coins - you're just going to count how many coins of each value exist and then rearrange them. 💥✨<br>
Welcome to Counting Sort.💥✨

### How Does It Work?
Counting Sort doesn't compare the elements in the array. Nope, no "Is 4 less than 5?" nonsense. Instead, it counts how many times each number occurs in the array. It's like counting people at a party, then rearrange them based on how many of each number exist! 🎉<br>
Let's say you have an array of numbers:
<pre> int arr[] = {4, 2, 2, 8, 3, 3, 1}; </pre>
And we need to sort them, but we don't want to compare them one by one. That's like sorting people by counting their height instead of just counting how many are tall, short or medium. Too much work!😜<br>
So, here's the Couting Sort solution:

### Step 1: Count the Occurences
Step 1 is like counting the coins in your piggy bank. For every number in the array, you count how many times it shows up. 📊<br>
In the array `{4, 2, 2, 8, 3, 3, 1}`, here's what we do:
1. Count how many times 1 appears (just once).
2. Count how many times 2 appears (twice).
3. Count how many times 3 appears (twice).
4. Count how many times 4 appears (once).
5. Count how many times 8 appears (once).
This is the frequency count for each number:
<pre> 1 -> 1 time
2 -> 2 times
3 -> 2 times
4 -> 1 time
8 -> 1 time </pre>