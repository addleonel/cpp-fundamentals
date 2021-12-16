# Sorting

> Sorting is a fundamental algorithm design problem. Many efficient algorithms
use sorting as a subroutine, **because it is often easier to process data if the
elements are in a sorted order**.

> There are many algorithms for sorting, and they are also good examples of
how to apply different algorithm design techniques. **The efficient general sorting
algorithms work in O(n log n) time**, and many algorithms that use sorting as a
subroutine also have this time complexity.

## Sorting Theory

The basic problem  in sorting is as follow:

**Given an array that contain n elements, your task is to sort the elements in increasing order**

from: 
```python
[3, 5, 6, 1, 2, 4, 2, 6, 5]
```

To this:

```python
[1, 2, 2, 3, 4, 5, 5, 6, 6]
```

## O(n^2)  Algorithms
- **[Bubble Sort:](https://github.com/addleonel/cpp-fundamentals/blob/main/algorithms/sorting/bubble_sort.cc)** Bubble sort consists of n rounds. On each round, the algorithm iterates
through the elements of the array. Whenever two consecutive elements are found
that are not in correct order, the algorithm swaps them. 

    ![](https://upload.wikimedia.org/wikipedia/commons/0/06/Bubble-sort.gif)

    The algorithm can be implemented as follows: 
    
    ```cpp
    void bubbleSort(int arr[], int n)
    {
        int i, j;
        for (i = 0; i < n-1; i++)
        {
            // Last i elements are already in place
            for (j = 0; j < n-i-1; j++)
            {
                if (arr[j] > arr[j+1])
                {
                    swap(&arr[j], &arr[j+1]);
                }
            }
        }
    }
    ```

    References:
    
    -  https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/sorting/bubble_sort.cpp
    - https://www.geeksforgeeks.org/bubble-sort/
    - https://www.youtube.com/watch?v=pqZ04TT15PQ

## O(n log n) Algorithms
- **Merge Sort:** Merge sort is a divide and conquer algorithm. It divides the array into
two halves, calls itself for the two halves and then merges the two sorted halves.
The merge() function is used for merging the two halves.
    ![](https://cdn.programiz.com/cdn/farfuture/PRTu8e23Uz212XPrrzN_uqXkVZVY_E0Ta8GZp61-zvw/mtime:1586425911/sites/tutorial2program/files/merge-sort-example_0.png)

    ![](https://i.imgur.com/HU2tfzo.gif)

    References:
 
    - https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/sorting/merge_sort.cpp
    - https://www.geeksforgeeks.org/merge-sort/
    - https://www.youtube.com/watch?v=ACFZn_xQcz8 