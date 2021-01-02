# 1379. Find a Corresponding Node of a Binary Tree in a Clone of That Tree

----
## Related topic

* Binary tree
* Depth first search
* Tree traversal

## Main Idea for the solution
1. Simple pre-order traversal and compare the current root node of the original tree and the target 

2. Return they are equal (reference), otherwise traverse the left/right subtree recursively. 