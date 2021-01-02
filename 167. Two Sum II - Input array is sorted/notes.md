# 167. Two Sum II - Input array is sorted

----
## Related topic

* Two pointer

## Main Idea for the solution

* start from the end of the array, 
* if target - arr[j] == arr[i] -> i and j is the answer
* target - arr[j] > arr[i] -> the answer in [i + 1, j] 
* target - arr[j] < arr[i] -> the answer in [i, j - 1] // arr[j] is too large
