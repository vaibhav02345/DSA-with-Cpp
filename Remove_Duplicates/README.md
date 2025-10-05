# 🎯 Remove Duplicates from Sorted Array

**🔗 LeetCode:** [26. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)  
**📚 Tags:** Array, Two Pointers  
**🏷️ Level:** Easy  

## 🧠 Problem Summary

Given an integer array `nums` **sorted in non-decreasing order**, remove the duplicates **in-place** such that each unique element appears only once.  
Return the number of unique elements, and rearrange the first part of the array to contain them.

You must perform the operation using **O(1)** extra space.

## 🛠️ Brute Force Approach (Using Extra Array)

🔹 Create a new array `uniqueNums`.  
🔹 Traverse through `nums` and push only elements not already present.  
🔹 Copy back to `nums` and return the count.

**Complexity:**  
📊 Time Complexity: **O(n)**  
📦 Space Complexity: **O(n)**  
🧠 Topics: Array, Traversal  

## ⚡ Optimal Approach (Two-Pointer Technique)

🔹 Use two pointers `i` and `j`.  
🔹 `i` marks the position of the **last unique element**.  
🔹 Move `j` through the array.  
🔹 Whenever `nums[j] != nums[i]`, increment `i` and copy `nums[j]` to `nums[i]`.  
🔹 Return `i + 1` as the new length of the unique elements.  

**Complexity:**  
📊 Time Complexity: **O(n)**  
📦 Space Complexity: **O(1)**  
🧠 Topics: Array, Two Pointers, In-Place Modification  

## 📌 Notes

- Works only for **sorted arrays** — otherwise, duplicates won’t be adjacent.  
- Common pattern used in multiple array problems (like `Remove Element`, `Move Zeroes`, etc.).  
- Useful for mastering **in-place array manipulation** and **pointer logic**.  
- Same approach can be adapted for linked lists and string problems with minor modifications.