# 🎯 Remove Duplicates from Sorted Array

**🔗 LeetCode:** [26. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)  
**📚 Tags:** Array, Two Pointers  
**🏷️ Level:** Easy  

## 🧠 Problem Summary

Given an integer array `nums` **sorted in non-decreasing order**, remove the duplicates **in-place** such that each unique element appears only once.  
Return the number of unique elements, and rearrange the first part of the array to contain them.

You must perform the operation using **O(1)** extra space.

---

## ⚡ Optimal Approach (Two-Pointer Technique)

🔹 Use two pointers `i` and `j`.  
🔹 `i` keeps track of the **last unique element**.  
🔹 Move `j` through the array starting from index 1.  
🔹 Whenever `nums[j] != nums[i]`, increment `i` and copy `nums[j]` to `nums[i]`.  
🔹 Return `i + 1` as the count of unique elements.

**Complexity:**  
📊 Time Complexity: **O(n)**  
📦 Space Complexity: **O(1)**  
🧠 Topics: Array, Two Pointers, In-Place Modification  

---

## 📌 Notes

- Works only for **sorted arrays** — duplicates must be adjacent.  
- The algorithm is **in-place** and doesn’t require any extra array.  
- Commonly reused in problems like `Remove Element`, `Move Zeroes`, and other array compaction tasks.  
- Clean, fast, and memory-efficient — the best approach for this problem.
