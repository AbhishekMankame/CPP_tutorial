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
<pre>
1 -> 1 time
2 -> 2 times
3 -> 2 times
4 -> 1 time
8 -> 1 time </pre>

In a count array, this looks like this:
<pre> int count[] = {0, 1, 2, 2, 1, 0, 0, 0, 1}; </pre>
Where the index represents the value, and the number at that index represents the frequency.

### Step 2: Place the Numbers Back in the Sorted Array
Now, instead of comparing the numbers, we use the counts to rebuild the sorted array. This is like lining people up by heights, but based on how many of each size you have in your party!<br>
For example:
- You start with the smallest number (1). Since it appears once, you put one "1" in the output array.
- Then, for 2 (which appears twice), you add two "2"s to the output.
- Do the same for 3, 4, and 8.
The result? A sorted array without any comparisons - it's like sorting effortlessly! 💪

### Final Sorted Array:
<pre> int sortedArr[]={1, 2, 2, 3, 3, 4, 8} </pre>

Tada! ***Sorted without a single comparison. No "is 2 smaller than 3?" nonsense. Just pure counting.🎉***

### Step 3: Adjust for Output
Once the counting is done, you can rebuild the original array using the frequency array. Just start placing elements in their new sorted positions.<br>
Here's what the code might look like in action:

### Code Snippet
<pre>
void countingSort(int arr[], int n){
    // Step 1: Find the maximum value in the array
    int max = *max_element(arr, arr + n);

    // Step 2: Create the count array and initialize it
    int count[max + 1] = {0}; // Create a count array of size (max + 1)

    // Step 3: Count the frequency of each number in the array
    for(int i = 0; i < n; i++){
        count[arr[i]]++;
    }

    // Step 4: Reconstruct the sorted array
    int index = 0;
    for(int i = 0; i <= max; i++){
        while(count[i]>0){
            arr[index++] = i;
            count[i]--;
        }
    }
} </pre>