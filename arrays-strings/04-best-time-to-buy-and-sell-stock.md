## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/2159875444/

### Approach

A single-pass approach is used by keeping track of the minimum stock price seen so far. For each price, the possible profit is calculated by subtracting the minimum price from the current price, and the maximum profit is updated when a larger profit is found.

### Complexity

- **Time:** O(n)
- **Space:** O(1)

### Notes

The solution handles cases where no profit is possible by keeping the initial maximum profit as 0. The solution was accepted on LeetCode with 213/213 test cases passed.