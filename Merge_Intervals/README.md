🧩 Merge Intervals

Link: [LeetCode 56](https://leetcode.com/problems/merge-intervals/)  
Tags: Array, Sorting, Greedy  
Level: Medium

🧠 Problem Summary  
You're given an array of intervals where `intervals[i] = [start_i, end_i]`.  
Merge all **overlapping intervals** and return a list of **non-overlapping intervals** that covers all the input intervals.

🛠️ Brute Force Approach

🔹 For each interval, check all other intervals for overlap.  
🔹 If overlap exists, merge and mark the interval as visited.  
🔹 Use a boolean vector to track merged intervals.  
🔹 Push only final non-overlapping intervals into the result.

📊 Time Complexity: `O(n^2)`  
📦 Space Complexity: `O(n)` (for merged tracking)  
🧠 Topics: Array, Nested Loops, Greedy

⚡ Optimal Approach

🔹 Sort intervals based on the start time.  
🔹 Initialize a result list with the first interval.  
🔹 Traverse through sorted intervals:  
   - If current interval overlaps with last in result → merge them.  
   - Else, push current interval into result.

📊 Time Complexity: `O(n log n)`  
📦 Space Complexity: `O(n)`  
🧠 Topics: Array, Sorting, Greedy

📌 Notes

- 🔄 Always sort the intervals first  
- 🤝 Overlap condition: `current[0] <= last_merged[1]`  
- 🧠 Smart use of greedy + sorting to optimize  
- 💯 Clean and scalable solution