## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/submissions/2159764125/

### Approach

A brute-force approach is used with two nested `for` loops to check every possible pair of elements in the array. The second loop starts from `i + 1` so that the same element is not used twice and each pair is checked only once. When two numbers add up to the target, their indices are returned.

### Complexity

- **Time:** O(n²)
- **Space:** O(1)

### Notes

The solution handles duplicate values correctly, such as `nums = [3, 3]` with `target = 6`, where the two different indices are returned. The solution was compiled and executed successfully in VS Code using GCC, and it was also submitted to LeetCode and accepted with 65/65 test cases passed.

A cleaner approach to try next time would be using a hash table, which can reduce the expected time complexity to O(n) at the cost of O(n) additional space. LeetCode's official problem page also identifies the hash-table approach as an optimization over brute force. :contentReference[oaicite:3]{index=3}