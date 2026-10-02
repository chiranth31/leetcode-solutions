## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/submissions/2159899720/

### Approach

An iterative binary search approach is used on the sorted array. Two pointers, `left` and `right`, define the search range, and the middle element is checked to determine which half of the array should be searched next.

### Complexity

- **Time:** O(log n)
- **Space:** O(1)

### Notes

The solution returns the index when the target is found and returns `-1` when the target does not exist in the array. The solution was accepted on LeetCode with 47/47 test cases passed and a runtime of 0 ms.