# 🎯 Longest Common Prefix

**🔗 LeetCode:** [14. Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)  
**📚 Tags:** String  
**🏷️ Level:** Easy  

## 🧠 Problem Summary

Given an array of strings `strs`, find the **longest common prefix** among them.  
If no common prefix exists, return an **empty string** `""`.

## 🛠️ Brute Force Approach

🔹 Take the **first string** as the initial prefix.  
🔹 Compare it with each other string **character-by-character**.  
🔹 Reduce the prefix until it matches the start of the current string.  
🔹 If prefix becomes empty, return `""`.

**Complexity:**  
📊 Time Complexity: **O(n * m)** *(n = number of strings, m = min string length)*  
📦 Space Complexity: **O(1)**  
🧠 Topics: String, Prefix Matching

## ⚡ Optimal Approach (Sort + Compare First & Last)

🔹 Sort the array of strings.  
🔹 The **first** and **last** strings will be the most different.  
🔹 Find the common prefix between these two only.  
🔹 Return that prefix.

**Complexity:**  
📊 Time Complexity: **O(n log n * m)**  
📦 Space Complexity: **O(1)**  
🧠 Topics: String, Sorting

## 📌 Notes

- Brute force is often enough since constraints are small.  
- Sorting method is shorter but not strictly better for huge datasets.  
- Very common interview warm-up problem to test string handling basics.