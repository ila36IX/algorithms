# Sorting algorithms & Big O
![](https://media.tenor.com/26cJJUxqcPIAAAAd/sorting-algorithm.gif)


## Bubble Sort

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted. While simple, Bubble Sort is generally inefficient on large lists and is not commonly used in practice for such cases.

## Quick Sort

Quick Sort is a fast, divide-and-conquer sorting algorithm that employs a pivot element to partition the array into two subarrays. Elements smaller than the pivot are placed to its left, and elements greater than the pivot are placed to its right. The process is recursively applied to the subarrays. Quick Sort is widely used due to its efficiency and is often the preferred choice for sorting large datasets.

## Insertion Sort

Insertion Sort builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as Quick Sort or Merge Sort. However, it has several advantages, such as simplicity and efficiency for small datasets or partially sorted lists.

## Selection Sort

Selection Sort is a simple sorting algorithm that divides the input list into a sorted and an unsorted region. The algorithm repeatedly selects the smallest (or largest, depending on the order) element from the unsorted region and swaps it with the first element of the unsorted region. Selection Sort has poor performance compared to more advanced algorithms but can be useful for small datasets or partially sorted lists.

## Shell Sort

Shell Sort is an optimization of Insertion Sort that compares elements that are far apart and progressively reduces the gap between elements to be compared. This helps move smaller elements toward the beginning of the array faster. While not as fast as Quick Sort, Shell Sort is more efficient than simple quadratic algorithms like Bubble Sort.


