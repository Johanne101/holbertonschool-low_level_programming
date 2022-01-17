Search Algorithms
=================

Resources
---------
***Read or watch:***

* [Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
  - [What is Search Algorithms](https://www.geeksforgeeks.org/searching-algorithms/)
  - [Search Algorithms](https://www.techopedia.com/definition/21975/search-algorithm)
  - [Linear Search](https://www.geeksforgeeks.org/linear-search/)
  - [wiki-Linear Search](https://en.wikipedia.org/wiki/Linear_search)
  - [Binary Search](https://www.geeksforgeeks.org/binary-search/)
  - [wiki-Binary Search](https://en.wikipedia.org/wiki/Binary_search_algorithm)
* [What is the best search algorithm to use depending on your needs](https://www.quora.com/What-is-the-best-search-algorithm-in-programming)
  - [Quora](https://www.quora.com/Which-is-the-best-algorithm-for-searching?share=1)
* [`A*` Search Algorithm](https://www.geeksforgeeks.org/a-search-algorithm/)
* [Space complexity (1)](https://www.geeksforgeeks.org/g-fact-86/)

General
-------
### What is a search algorithm
<p>
Searching Algorithms are designed to check for an element or retrieve an element from any data structure where it is stored. Based on the type of search operation, these algorithms are generally classified into two categories:

|Type of Search Operation| Description|
|:-----------------------|------------|
|Sequential Search:| In this, the list or array is traversed sequentially and every element is checked. For example: Linear Search.|
|Interval Search:| These algorithms are specifically designed for searching in sorted data-structures. These type of searching algorithms are much more efficient than Linear Search as they repeatedly target the center of the search structure and divide the search space in half.|
|Linear Search:| A linear search sequentially checks each element of the list until it finds an element that matches the target value. If the algorithm reaches the end of the list, the search terminates unsuccessfully.|
|Binary Search:|Search a sorted array by repeatedly dividing the search interval in half. Begin with an interval covering the whole array. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise, narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.|
</p>

### What is a linear search
----------------
<p>
a linear search or sequential search is a method for finding an element within a list. It sequentially checks each element of the list until a match is found or the whole list has been searched.[1]

A linear search runs in at worst linear time and makes at most n comparisons, where n is the length of the list.
If each element is equally likely to be searched, then linear search has an average case of
`n+1/2`

comparisons, but the average case can be affected if the search probabilities for each element vary.
Linear search is rarely practical because other search algorithms and schemes, such as the binary search algorithm and hash tables, allow significantly faster searching for all but short lists.

**Basic algorithm**

Given a list L of n elements with values or records L0 .... Ln−1, and target value T, the following subroutine uses linear search to find the index of the target T in L.[3]

1. Set i to 0.
2. If Li = T, the search terminates successfully; return i.
3. Increase i by 1.
4. If i < n, go to step 2. Otherwise, the search terminates unsuccessfully.

</p>

* What is a binary search
* What is the best search algorithm to use depending on your needs
<p>
Azure Search is one of the best search algorithm.

Which is the best algorithm for searching?
------------------------------------
There is no best search algorithm. All it depends on situations that what data and from how much data you are searching.

Generally there are two types of searching algos,

> Linear Search: It is best when the data is less and is unsorted. It will be lengthy for the huge amount of data because it go through the every data value linearly for searching. Complexty is O(n).
> Binary Search: It is a more efficient search algorithm which relies on the elements in the list being sorted. Every iteration we divide the array by 2 and then see which side the element (to be searched) falls (lower half or upper half) and recursively do the same thing till the element is found. Complexity is O(log n).

There is one more searching technique:

> Search using HASH value with complexity O(1):
Insert the elements of the data structure into a hash implemented data structure like Hashtable or HashMap and you are good to go with one line statement:
hashArr.contains(a[i])
Since the elements of hashmap are indexed by hashcode, the time to search for any particular element would almost be = 1 (CONSTANT time)
</p>

More Info
----------
* `O(1)`
* `O(n)`
* `O(n!)`
* `n*m -> O(nm)`
* `n square -> O(n^2)`
* `sqrt n -> O(sqrt(n))`
* `log(n) -> O(log(n))`
* `n * log(n) -> O(nlog(n))`

### What is the time complexity (worst case) of a linear search in an array of size n?


