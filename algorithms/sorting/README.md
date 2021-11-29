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
- **Bubble Sort:** Bubble sort consists of n rounds. On each round, the algorithm iterates
through the elements of the array. Whenever two consecutive elements are found
that are not in correct order, the algorithm swaps them. The algorithm can be
implemented as follows: 
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