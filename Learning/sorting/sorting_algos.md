## 🧹 Sorting Algorithms - "The Ultimate Glow-Up Squad"
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

### 3. Insertion Sort ✍️ (a.k.a. "The Organized Nerd")
Storytime:
Imagine you're sorting cards in your hand:
You pick one card at a time and insert it into the correct spot.

Steps:
- Take one element.
- Insert it into the sorted left part.

Code Sketch:
<pre> void insertionSort(int arr[], int n){
    for(int i = 1; i < n; ++i){
        int key=arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
} </pre>

### Time Complexity:
- Worst: O(n^2)
- Best (already sorted): O(n)

### Fun Fact:
Tiny arrays (like n <= 10) love insertion sort.
In fact, many modern algorithms secretly use insertion sort for small cases! 🕵️

### 4. Merge Sort 🛠️ (Divide and Conquer Mastermind)
Storytime:
Divide and conquer like a true Roman general:
- Split the array (array) into two halves.
- Conquer each half (sort them).
- Merge them back into a fully sorted army.

Steps:
- Recursively split the array into halves.
- Merge two sorted halves into one.

Code Sketch:
<pre> void merge(int arr[], int l, int m, int r){
    int n1 = m-1+1, n2 = r-m;
    int left[n1], right[n2];

    for(int i = 0; i < n1; ++i)
        left[i] = arr[i+1];
    for(int i = 0; i < n2; ++i)
        right[i] = arr[m+1+i];

    int i = 0, j = 0, k = 1;
    while(i < n1 && j < n2)
        arr[k++] = (left[i] < right[j]) ? left[i++] : right[j++];
    while(i < n1)
        arr[k++] = left[i++];
    while(j < n2)
        arr[k++] = right[j++];
}

void mergeSort(int arr[], int l, int r){
    if(l >= r) return;
    int m = l + (r-l)/2;
    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);
    merge(arr, l, m, r);
} </pre>

### Time Complexity:
- Always: O(n log n)

### Fun Fact:
Merge sort is stable (doesn't mix equal elements) and used in external sorting (huge data like 10GB files).

### 5. Quick Sort ⚡(The Rockstar of Sorting)
Storytime:
Pick a random person (pivot) at a party:
- Everyone shorter goes to the left.
- Everyone taller goes to the right.
- Recursively do the same.

Steps:
- Pick a pivot.
- Partition the < pivot and >pivot groups.
- Recursively sort.

Code Sketch:
<pre> int partition(int arr[], int l, int r){
    int pivot = arr[r];
    int i = l-1;
    for(int j=1; j < r; ++j){
        if(arr[j] < pivot)
            swap(arr[++i], arr[j]);
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}

void quickSort(int arr[], int l, int r){
    if(l < r){
        int p = partition(arr, l, r);
        quickSort(arr, l, p-1);
        quickSort(arr, p+1, r);
    }
} </pre>

### Time Complexity:
- Best: O(n log n)
- Worst (bad pivot): 0(n^2) (rare if pivot is random)

### Fun Fact:
QuickSort is so sassy and fast that C++'s std::sort() is basically a modified QuickSort (intro sort) under the hood!


## 🎉 Summary Table
| Algorithm | Time (Best) | Time (Worst) | Space | Stable | Use Case |
| --------- | ----------- | ------------ | ------ | ------ | -------- |
| Bubble Sort | O(n) | O(n^2) | O(1) | Yes | Educational, memes |
| Selection Sort | O(n^2) | O(n^2) | O(1) | No | Simple but slow |
| Insertion Sort | O(n) | O(n^2) | O(1) | Yes | Small arrays |
| Merge Sort | O(n log n) | O(n log n) | O(n) | Yes | Large datasets |
| Quick Sort | O(n log n) | O(n^2) | O(n log n) | No | General Purpose |