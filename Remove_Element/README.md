# 🎯 Remove Element

**🔗 LeetCode:** [27. Remove Element](https://leetcode.com/problems/remove-element/)  
**📚 Tags:** Array, Two Pointers  
**🏷️ Level:** Easy  

## 🧠 Problem Summary

Given an integer array `nums` and an integer `val`, remove all occurrences of `val` **in-place** such that each element appears only once.  
Return the new length of the array after removal.

You must perform this operation using **O(1)** extra space.

---

## ⚡ Optimal Approach (Two-Pointer Technique)

🔹 Use two pointers `i` and `j`.  
🔹 `i` keeps track of the **next position to place a non-val element**.  
🔹 Traverse the array with `j`.  
🔹 Whenever `nums[j] != val`, copy `nums[j]` to `nums[i]` and increment `i`.  
🔹 Return `i` as the new length of the array.

**Complexity:**  
📊 Time Complexity: **O(n)**  
📦 Space Complexity: **O(1)**  
🧠 Topics: Array, Two Pointers, In-Place Modification  

---

## 📌 Notes

- Works for **any integer array**, duplicates are allowed — only elements equal to `val` are removed.  
- The algorithm is **in-place**, no extra array is required.  
- Frequently used in array manipulation problems and as a building block for other in-place algorithms.