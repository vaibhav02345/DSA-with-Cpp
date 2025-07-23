💰 Maximum Subarray

Link: [LeetCode 53](https://leetcode.com/problems/maximum-subarray/)  
Tags: Array, Divide and Conquer, Dynamic Programming  
Level: Easy

✅ Approaches

🔹 Brute Force  

Check all possible subarrays and track the maximum sum.  
Simple but not efficient for large inputs.

Time: O(n²)  
Space: O(1)  

🔹 Optimal (Kadane’s Algorithm)

Track current subarray sum and update max as you go.  
If current sum drops below 0, reset it.

Time: O(n)  
Space: O(1)  

🧠 Concepts Used  

- Prefix sums  
- Sliding subarray logic  
- Kadane’s algorithm  
- Subarray optimization

📌 Notes  

- Core DP problem — must-know for coding rounds.  
- Clean one-pass solution with great intuition behind it.  
- Also useful for extensions like circular subarrays.
