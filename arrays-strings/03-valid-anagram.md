## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/submissions/2159841762/

### Approach

A frequency array of 26 positions is used to count the occurrences of each lowercase English letter. The counts are increased for characters in `s` and decreased for characters in `t`. If all counts are zero, both strings contain the same characters with the same frequencies, so they are anagrams.

### Complexity

- **Time:** O(n)
- **Space:** O(1)

### Notes

The solution first checks whether the two strings have the same length. The 26-element frequency array works efficiently because the problem is restricted to lowercase English letters. The solution was accepted on LeetCode with 56/56 test cases passed and a runtime of 0 ms.