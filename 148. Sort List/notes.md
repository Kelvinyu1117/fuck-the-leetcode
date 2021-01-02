# 148. Sort List

----
## Related topic

* LinkedList
* Merge sort

## Main Idea for the solution

* Apply the idea of merge sort, divide the list into two halves recursively

* Merge the left halve and right halve of the list when the len of the sublist = 1, as a list with 1 element can be considered sorted. 