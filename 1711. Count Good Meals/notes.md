# 1711. Count Good Meals

----
## Related topic

* Hashmap

## Main Idea for the solution
* Using similiar appraoch as two sum, store the mapping (value -> frequency)

* As the solution can only be < 32 values (2^n, 0 <= n < 32), check each values by the following approach:

* For each target value t, calculate the t - nums[i], and check the result is in the hashmap or not

* if the result in map, update the counter by getting value in the map, otherwise, update the map accordingly(duplicate values are allowed, e.g. [1, 1, 0] -> 3, because (1, 1), (1, 0), (1, 0))