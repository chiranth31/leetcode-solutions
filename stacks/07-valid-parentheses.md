## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/submissions/2159929817/

### Approach

A stack is used to store opening brackets while traversing the string. For each closing bracket, the top of the stack is checked to ensure it matches the corresponding opening bracket. The string is valid only when all brackets are matched and the stack is empty at the end.

### Complexity

- **Time:** O(n)
- **Space:** O(n)

### Notes

The solution handles different types of brackets: `()`, `[]`, and `{}`. It also handles cases with unmatched or incorrectly ordered brackets. The solution was accepted on LeetCode with 103/103 test cases passed and a runtime of 0 ms.