# 🎯 Find First and Last Position of Element in Sorted Array  

🔗 Link: [LeetCode 34](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)  
🏷️ Tags: Array, Binary Search  
🧱 Level: Medium  

## 🧠 Problem Summary  

You are given a **sorted array** of integers `nums` and a **target** value.  
Return the **first and last positions** of the target in the array.  

If the target is **not found**, return `[-1, -1]`.  

## 🛠️ Brute Force Approach  

🔹 Traverse the array linearly.  
🔹 Record the **first** and **last** occurrence indices of the target.  
🔹 Return `{first, last}` at the end.  

📊 **Time Complexity**: `O(n)`  
📦 **Space Complexity**: `O(1)`  
🧠 **Topics**: Array, Brute Force  

## ⚡ Optimal Binary Search Approach  

🔹 Perform **two binary searches**:  
   - One to find the **first occurrence** of the target (left-biased).  
   - Another to find the **last occurrence** of the target (right-biased).  
🔹 Exploit the sorted property of the array for efficiency.  
🔹 Return `{first, last}` after both searches.  

📊 **Time Complexity**: `O(log n)`  
📦 **Space Complexity**: `O(1)`  
🧠 **Topics**: Binary Search, Array  

## 📌 Notes  

- Brute force is straightforward but slow.  
- Binary search is **efficient and scalable** for large arrays.  
- This is a classic **modified binary search** problem commonly asked in interviews.  