## 🧹 Sorting Algorithms - "The Ultimate Glow-Up Squad
<pre> "If life feels messy, may be you just need a better sorting algorithm." 😌</pre>

### 🎯 Why Sorting Matters?
- 🧠 Search faster: Finding an element in a sorted array = rocket speed (binary search, O(log n)).
- 🚀 Simplify problems: Many DSA problems becomes 10x easier after sorting first.
- 🛠️ Foundation: Sorting is the basic building block for other advanced techniques (greedy, divide and conquer, etc.).

## 📋Let's Start with the Classic Sorting Algorithms

### 1. Bubble Sort 🫧 (a.k.a "The Clumsy Waiter")
Storytime:
- If two people are standing out of order, you swap them.
- You keep doing this... until no one needs swapping.

Steps:
- Compare adjacent elements.
- Swap if the left one is bigger.
- Repeat until the list is sorted.

Code Sketch:
<pre> void bubbleSort(int arr[], int n){
    for(int i=0; i < n-1; ++i){
        for(int j=0; j < n-i-1; ++j){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
} </pre>

### Time Complexity:
- Worst: O(n^2)
- Best (already sorted): O(n) (with an optimization flag)

### Fun Fact:
Bubble sort is so slow that professors usually use it to teach patience, not efficiency. 🐢

### 2. Selection Sort 👑 (a.k.a. "The Pickiest Shopper")
Storytime:
Imagine you want to buy the cheapest apple first, then the second cheapest, then the third cheapest... and so on.

Steps:
- Find the smallest element.
- Swap it with the first unsorted element.
- Repeat for the rest.

Code Sketch:
<pre> void selectionSort(int arr[], int n){
    for(int i=0; i < n-1; ++i){
        int minIdx = i;
        for(int j=i+1; j < n; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
            swap(arr[i], arr[minIdx]);
        }
    }
} </pre>

### Time Complexity:
- Always: O(n^2) (sad!)

### Fun Fact:
Selection sort does the fewer swaps than bubble sort.
(But still, it's slower than m grandma with a shopping list.)