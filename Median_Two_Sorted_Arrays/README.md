## 🧠 Median of Two Sorted Arrays

🔗 Link: [LeetCode 4](https://leetcode.com/problems/median-of-two-sorted-arrays/)  
🏷️ Tags: Binary Search, Divide and Conquer  
📶 Level: Hard  

✅ Optimal Approach

🔹 Always apply binary search on the smaller array.  
🔹 Partition both arrays such that the left side contains half of the total elements.  
🔹 Ensure partition condition: `max(left1, left2) <= min(right1, right2)`.  
🔹 If total length is odd → median is `max(left1, left2)`.  
🔹 If even → median is `(max(left1, left2) + min(right1, right2)) / 2.0`.  

> Runs in `O(log(min(m, n)))` with constant space.  

⏱️ Complexity

- Time: `O(log(min(m, n)))`  
- Space: `O(1)`  

🧠 Concepts Used

- Binary search on partition index  
- Handling edge cases with `INT_MIN` and `INT_MAX`  
- Median definition for odd/even length  
- Divide & conquer style approach  
- Optimized compared to merge-based brute force  

📌 Notes

- ⚠️ Always binary search on the smaller array to avoid index overflow.  
- 🚫 Don’t merge arrays — too slow (O(m+n)).  
- ✅ Handles edge cases like one empty array.  
- 🧵 Brute force approaches (merge + sort) are simpler but less efficient.  