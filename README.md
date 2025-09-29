# Sorting Algorithms in C++

## Aim
To implement and study various sorting algorithms in C++, including Bubble Sort, Insertion Sort, Selection Sort, Merge Sort, Quick Sort, Heap Sort, and Bucket Sort, and to understand their step-by-step working, efficiency, and practical applications.

---

## Theory
Sorting is a fundamental concept in computer science that involves arranging the elements of a list or array in a particular order, usually **ascending** or **descending**. Efficient sorting is crucial for improving the performance of searching, data analysis, and algorithm optimization.

### Key Concepts:
1. **Comparison-based vs Non-comparison-based Sorting**:
   - Comparison-based: Bubble Sort, Insertion Sort, Selection Sort, Merge Sort, Quick Sort, Heap Sort.
   - Non-comparison-based: Bucket Sort (uses value distribution rather than comparisons).

2. **Stability**:
   - Stable sorts maintain the relative order of equal elements (Bubble Sort, Insertion Sort, Merge Sort, Bucket Sort).
   - Unstable sorts may change the relative order of equal elements (Selection Sort, Heap Sort, Quick Sort).

3. **Time and Space Complexity**:
   - Simple sorts (Bubble, Insertion, Selection): O(n²) time, O(1) space.
   - Efficient sorts (Merge, Quick, Heap): O(n log n) average time, Merge uses O(n) extra space, Quick and Heap are in-place.
   - Bucket Sort: O(n + k) time for n elements and k buckets, extra memory required.

Sorting algorithms are widely used in computer applications such as database indexing, search optimization, graphics rendering, and data analysis.

---

## Algorithms

### 1. Bubble Sort
1. Start from the first element of the array.  
2. Compare it with the next element and swap if it is greater.  
3. Move to the next pair and repeat until the end of the array.  
4. Repeat the process for each element until no swaps occur during a pass.  
5. Stop when the array is fully sorted.

---

### 2. Insertion Sort
1. Start from the second element of the array.  
2. Compare it with elements in the sorted portion (to its left).  
3. Shift all elements greater than the current element one position to the right.  
4. Insert the current element in its correct position.  
5. Repeat for all elements.  
6. Stop when the array is sorted.

---

### 3. Selection Sort
1. Start from the first element of the array.  
2. Find the minimum element in the unsorted portion.  
3. Swap it with the first unsorted element.  
4. Move the sorted-unsorted boundary one step to the right.  
5. Repeat until all elements are sorted.  
6. Stop.

---

### 4. Merge Sort
1. Recursively divide the array into two halves until each subarray has one element.  
2. Merge each pair of subarrays in sorted order.  
3. Continue merging until the entire array is merged into a single sorted array.  
4. Stop.

---

### 5. Quick Sort
1. Choose a pivot element (commonly the last element).  
2. Partition the array: elements ≤ pivot go to the left, elements > pivot go to the right.  
3. Recursively apply Quick Sort to the left and right subarrays.  
4. Stop when subarray sizes are ≤ 1.  
5. Array is sorted.

---

### 6. Heap Sort
1. Build a max-heap from the array.  
2. Swap the root (maximum) with the last element of the heap.  
3. Reduce the heap size by 1.  
4. Heapify the root to maintain the heap property.  
5. Repeat steps 2-4 until heap size is 1.  
6. Stop; the array is sorted.

---

### 7. Bucket Sort
1. Create `n` empty buckets (for `n` elements).  
2. Distribute elements into buckets based on a mapping function (e.g., `bucketIndex = element × n`).  
3. Sort each individual bucket using another sorting algorithm (like insertion sort or `std::sort`).  
4. Concatenate all buckets to reconstruct the sorted array.  
5. Stop.

---

## Conclusion
The seven sorting algorithms demonstrate different strategies for ordering data:  
- **Simple sorts** like Bubble, Insertion, and Selection are intuitive but inefficient for large datasets.  
- **Efficient sorts** like Merge, Quick, Heap, and Bucket offer better performance for larger arrays.  
- Stability, in-place operation, and time complexity must be considered when choosing the appropriate sorting algorithm.  
- Understanding these algorithms builds a foundation for algorithm design, problem-solving, and optimization in programming and data structures.
