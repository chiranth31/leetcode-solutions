## Problem: Reverse String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

A two-pointer approach is used to reverse the character array in-place. One pointer starts from the beginning and the other from the end, and their characters are swapped while moving the pointers toward the center.

### Complexity

- **Time:** O(n)
- **Space:** O(1)

### Notes

The solution handles strings of both odd and even lengths. The two-pointer approach avoids using an additional array and satisfies the in-place requirement.