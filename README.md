# Sorting algorithms & Big O
![](https://media.tenor.com/26cJJUxqcPIAAAAd/sorting-algorithm.gif)

# Sorting Algorithms Overview

This README provides a brief overview of several sorting algorithms: Bubble Sort, Quick Sort, Insertion Sort, Selection Sort, and Shell Sort. Each algorithm has its own characteristics, advantages, and use cases.

## 1. Bubble Sort

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

### Time Complexity:
- ⚡️ Best Case: O(n) (when the list is already sorted)
- 💥 Worst Case: O(n^2)
- 🔄 Average Case: O(n^2) 

## 2. Quick Sort

Quick Sort is a divide-and-conquer algorithm that works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively.

### Time Complexity:
- ⚡️ Best Case: O(n log n)
- 💥 Worst Case: O(n^2) (rare, depends on the pivot selection)
- 🔄 Average Case: O(n log n)

## 3. Insertion Sort

Insertion Sort builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.

### Time Complexity:
- ⚡️ Best Case: O(n) (when the list is nearly sorted)
- 💥 Worst Case: O(n^2)
- 🔄 Average Case: O(n^2)

## 4. Selection Sort

Selection Sort is a simple sorting algorithm that works by repeatedly finding the minimum element from the unsorted part of the array and putting it at the beginning.

### Time Complexity:
- ⚡️ Best Case: O(n^2)
- 💥 Worst Case: O(n^2)
- 🔄  Average Case: O(n^2)

## 5. Shell Sort

Shell Sort is an optimization over insertion sort that compares elements that are far apart and gradually reduces the gap between elements to be compared. It is a generalized version of insertion sort.

### Time Complexity:
- ⚡️ Best Case: O(n log n)
- 💥 Worst Case: Depends on the gap sequence used
- 🔄  Average Case: Depends on the gap sequence used
