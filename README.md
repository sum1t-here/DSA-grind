# Data Structure

    - Linear DS (Array, Stack, Queue and many more)
    - Non-Linear Ds (Trees, Graphs)

# Array

    - Contiguous memory location
    - default index 0
    - random access using arr[index]

# Array in python:

Dynamic Array

# Methods for array in python

`append()` : `Adds an element at the end of the list`

`clear()` : `Removes all elements from the list`

`copy()` : `Returns a copy of the list`

`count()` : `Returns the number of elements with the specified value`

`extend()` : `Add the elements of a list (or any iterable), to the end of the current list`

`index()` : `Returns the index of the first element with the specified value`

`insert()` : `Adds an element at the specified position`

`pop()` : `Removes the element at the specified position`

`remove()` : `Removes the first item with the specified value`

`reverse()`: `Reverses the order of the list`

`sort()` : `Sorts the list`

## Address of an element in 1D arrray:

    arr[i] = Base address + (i - lower Bound of an index) * size of an element

    lower bound -> by default 0

## 2D arrays

     _            _
    | 2     4    6 |
    | 8     10   12|
    | 14    17   20|
    |_            _|

### Storing 2D in 1D array

    - Row major form -> Row wise
    - Column major form -> Column wise

### Address of element in 2D Row major form

loc (arr[i][j]) = Base address + [(i - Lower bound row) * number of columns + (j - lower bound column)]\*size of each element

### Address of element in 2D Column major form

loc (arr[i][j]) = Base address +[(j - lower bound column) * number of rows + (i - Lower bound row)]\*size of each element

# Sorting algorithm

Broadly classified into two types:

- comparision based

  - Selection Sort
  - Bubble Sort
  - Quick Sort
  - Merge Sort
  - Heap Sort

- non-comparision based
  - Count Sort
  - Radix Sort
  - Bucket Sort

## Stable and unstable sorting algorithm

Stable: Relative order should be maintained after sorting algorithms

Unstable:

- Quick sort
- Heap sort
- Selection sort

## Inplace and outplace sorting algorithm

Inplace: Not using extra space to sort
Outplace: Using extra space (Merge sort)
