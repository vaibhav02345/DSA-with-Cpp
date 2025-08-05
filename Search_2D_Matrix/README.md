🧩 Search a 2D Matrix

Link: [LeetCode 74](https://leetcode.com/problems/search-a-2d-matrix/)  
Tags: Matrix, Binary Search  
Level: Medium

🧠 Problem Summary  
You are given an `m x n` matrix with the following properties:  
1. Each row is sorted in non-decreasing order.  
2. The first integer of each row is greater than the last integer of the previous row.  
Given a target integer, return `true` if it exists in the matrix, otherwise return `false`.

🛠️ Brute Force Approach

🔹 Traverse the matrix element by element using nested loops.  
🔹 Compare each value with the target.

📊 Time Complexity: O(m * n)  
📦 Space Complexity: O(1)  
🧠 Topics: Matrix, Linear Search

⚡ Optimal Approach

🔹 Treat the matrix as a flattened 1D sorted array.  
🔹 Perform binary search using index mapping:  
   - `row = mid / n`, `col = mid % n`  
🔹 Compare the value at `matrix[row][col]` with the target.

📊 Time Complexity: O(log(m * n))  
📦 Space Complexity: O(1)  
🧠 Topics: Matrix, Binary Search

📌 Notes

- Smart trick: convert 2D index to 1D for binary search  
- Avoids unnecessary nested loops  
- Perfect example of flattening dimensions to apply known algorithms  
- Efficient solution especially when matrix size is large
