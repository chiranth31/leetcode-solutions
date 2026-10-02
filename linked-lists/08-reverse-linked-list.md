## Problem: Reverse Linked List (Easy)

**Link:** https://leetcode.com/problems/reverse-linked-list/submissions/2159937162/

### Approach

An iterative three-pointer approach is used to reverse the linked list in-place. The `previous` pointer stores the reversed portion, `current` points to the node being processed, and `next` temporarily saves the remaining list before changing the current node's link.

### Complexity

- **Time:** O(n)
- **Space:** O(1)

### Notes

The solution handles an empty linked list and a single-node list without requiring special pointer changes. The solution was accepted on LeetCode with 28/28 test cases passed and a runtime of 0 ms.