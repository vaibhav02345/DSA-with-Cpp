🧩 4Sum

🔗 Link: [LeetCode 18](https://leetcode.com/problems/4sum/)  
🏷️ Tags: Array, Two Pointers, Sorting  
📊 Level: Medium  

🧠 Problem Summary

Given an array `nums` of `n` integers, return all unique quadruplets `[a, b, c, d]` such that:  
`a + b + c + d == target`  
You must not return duplicate quadruplets.

🛠️ Brute Force Approach

🔹 Use 4 nested loops to try every combination of 4 elements.  
🔹 Check if their sum is equal to the target.  
🔹 Store the unique combinations in a set to avoid duplicates.

📊 Time Complexity: O(n⁴)  
📦 Space Complexity: O(k), where k is number of unique quadruplets  
🧠 Topics: Brute Force, Hashing

⚡ Optimal Approach

🔹 Sort the array.  
🔹 Use 2 fixed pointers (i, j) and then apply two-pointer technique on the subarray ahead of `j`.  
🔹 Skip duplicates using `while` loops to ensure unique quadruplets.  
🔹 If `sum < target`, move `left++`, else move `right--`.

📊 Time Complexity: O(n³)  
📦 Space Complexity: O(1) (excluding result storage)  
🧠 Topics: Two Pointers, Sorting, Array

📌 Notes

- Sorting helps avoid duplicates and enables two-pointer technique.  
- Skip duplicate values at every level: i, j, left, right.  
- Can be generalized to k-sum using recursion.  
- Common interview variant: 3Sum (LeetCode 15).