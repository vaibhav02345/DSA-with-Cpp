🧩 Peak Index in a Mountain Array

Link: [LeetCode 852](https://leetcode.com/problems/peak-index-in-a-mountain-array/)  
Tags: Array, Binary Search  
Level: Easy

🧠 Problem Summary  
Given a mountain array (strictly increasing, then strictly decreasing), return the index of the peak element.

🛠️ Brute Force Approach

🔹 Traverse the array from `1` to `n-2`.  
🔹 Compare each element with its neighbors: if `arr[i] > arr[i-1] && arr[i] > arr[i+1]`, return `i`.

📊 Time Complexity: O(n)  
📦 Space Complexity: O(1)  
🧠 Topics: Array

⚡ Optimal Approach

🔹 Use Binary Search since the array has a mountain property.  
🔹 Check midpoints and move left or right based on the slope:  
   - If `arr[mid] < arr[mid+1]`, move right.  
   - Else, move left.

📊 Time Complexity: O(log n)  
📦 Space Complexity: O(1)  
🧠 Topics: Array, Binary Search

📌 Notes 

- Identifying binary search applicability based on array properties  
- Using peak conditions to reduce search space  
- Efficient peak-finding in a structured array  
- Choosing between linear and logarithmic solutions