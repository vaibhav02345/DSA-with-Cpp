# 🧩 Trapping Rain Water

🔗 Link: [LeetCode 42](https://leetcode.com/problems/trapping-rain-water/)  
🏷️ Tags: Array, Two Pointers, Dynamic Programming  
🧱 Level: Hard  

## 🧠 Problem Summary  

Given `n` non-negative integers representing an elevation map where the width of each bar is 1,  
compute how much water it can trap after raining.  

## 🛠️ Brute Force Approach  

🔹 For each bar, find the **max height on the left** and the **max height on the right**.  
🔹 Water trapped at `i = min(leftMax, rightMax) - height[i]`.  
🔹 Sum for all bars.  

📊 Time Complexity: **O(n²)**  
📦 Space Complexity: **O(1)**  
🧠 Topics: Array, Brute Force  

## ⚡ Optimal Approach – Two Pointers (Most Efficient)  

🔹 Use two pointers `l` and `r`.  
🔹 Maintain `leftMax` and `rightMax`.  
🔹 Move the smaller pointer inward:  
- If `height[l] < height[r]`, trapped water depends on `leftMax`.  
- Else, trapped water depends on `rightMax`.  

📊 Time Complexity: **O(n)**  
📦 Space Complexity: **O(1)**  
🧠 Topics: Array, Two Pointers  

## 📌 Notes  

- Brute force is simple but very slow for large inputs.  
- Prefix/Suffix method is a clean O(n) approach but uses extra memory.  
- Two-pointer approach is the most optimal (O(n), O(1)).  
- Visualizing with a histogram helps in understanding how water is trapped.  