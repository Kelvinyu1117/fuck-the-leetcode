# 1640. Check Array Formation Through Concatenation

----
## Related topic

* Hashmap

## Main Idea for the solution
* As the order of elements in the sub-array cannot be rearranged, we can check the target array instead of generating all the combination of the flatted sub-array

* Using a Hashmap to store the mapping: first element -> subarray

* Concate the subarray by indexing its first element

* Compare the concated result to the target array 