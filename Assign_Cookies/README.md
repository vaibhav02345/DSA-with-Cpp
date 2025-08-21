# 🍪 Assign Cookies  

🔗 Link: [LeetCode 455](https://leetcode.com/problems/assign-cookies/)  
🏷️ Tags: Greedy, Sorting, Two Pointers  
🧱 Level: Easy  

## 🧠 Problem Summary  

You are given two integer arrays:  
- `g[i]` → greed factor of the i-th child (minimum cookie size required)  
- `s[j]` → size of the j-th cookie  

Each child can receive **at most one cookie**, and each cookie can be given to **at most one child**.  
A child will be content if the cookie’s size ≥ their greed factor.  

Return the **maximum number of content children**.  

## 🛠️ Brute Force Approach  

🔹 For each child, try every cookie to see if it can satisfy them.  
🔹 Mark cookies as “used” once assigned.  
🔹 Count satisfied children.  

📊 **Time Complexity**: `O(n × m)`  
📦 **Space Complexity**: `O(m)`  
🧠 **Topics**: Array, Brute Force  

## ⚡ Optimal Greedy Approach  

🔹 Sort both `g` (greed factors) and `s` (cookie sizes).  
🔹 Use two pointers:  
   - One for children  
   - One for cookies  
🔹 If the current cookie can satisfy the current child → assign & move both pointers.  
🔹 Else → move cookie pointer forward.  

📊 **Time Complexity**: `O(n log n + m log m)`  
📦 **Space Complexity**: `O(1)`  
🧠 **Topics**: Greedy, Sorting, Two Pointers  

## 📌 Notes  

- Brute force is straightforward but slow.  
- Greedy is the **industry-standard** approach here.  
- Exact same greedy pattern appears in **Players and Trainers (LeetCode 2410)**.  