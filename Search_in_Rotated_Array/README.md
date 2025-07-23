🔍 Search in Rotated Sorted Array

Link: [LeetCode 33](https://leetcode.com/problems/search-in-rotated-sorted-array/)  
Tags: Array, Binary Search  
Level: Medium

🧠 Problem Summary  
Given a rotated sorted array and a target value, return its index if found. Otherwise, return -1. You must do this in O(log n) time.

✅ Approach

🔹 Modified Binary Search is used:  
   - At every step, check if the left half is sorted or the right half is sorted.  
   - Narrow the search based on where the target lies.

📊 Time & Space Complexity  

- Time: O(log n)  
- Space: O(1)

🧠 Concepts Used

- 🔁 Array manipulation  
- ⚡ Logarithmic search  
- 🧮 Modified binary search logic  
- 🧭 Understanding sorted subarrays even in rotated form


📌 Notes

- Target not found → return `-1`  
- Fully sorted array is a special case of rotated array  
- Duplicates not allowed in this version (for LeetCode 33)