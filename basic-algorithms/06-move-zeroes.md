## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/submissions/2159917870/

### Approach

A two-pointer approach is used to move all non-zero elements to the front while maintaining their relative order. The `position` pointer keeps track of the next position where a non-zero element should be placed, and elements are swapped in-place without using an extra array.

### Complexity

- **Time:** O(n)
- **Space:** O(1)

### Notes

The solution modifies the original array in-place and moves all zeroes to the end while preserving the order of non-zero elements. It also handles cases where the array contains only zeroes or no zeroes. The solution was accepted on LeetCode with 75/75 test cases passed and a runtime of 4 ms.