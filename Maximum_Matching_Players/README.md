# 🏋️ Maximum Matching of Players and Trainers  

🔗 Link: [LeetCode 2410](https://leetcode.com/problems/maximum-matching-of-players-and-trainers/)  
🏷️ Tags: Greedy, Sorting, Two Pointers  
🧱 Level: Medium  

## 🧠 Problem Summary  

You are given two integer arrays:  
- `players[i]` → ability of the i-th player  
- `trainers[j]` → capacity of the j-th trainer  

A player can be matched with a trainer if `players[i] <= trainers[j]`.  
Each player and each trainer can be matched with **at most one** other.  

Return the **maximum number of matchings**.  

## 🛠️ Brute Force Approach  

🔹 For each player, try to assign them a trainer.  
🔹 A trainer can be used only once, so track used trainers.  
🔹 Count the number of valid assignments.  

📊 **Time Complexity**: `O(n × m)`  
📦 **Space Complexity**: `O(m)`  
🧠 **Topics**: Array, Brute Force  

## ⚡ Optimal Greedy Approach  

🔹 Sort both `players` and `trainers`.  
🔹 Use two pointers:  
   - One for players  
   - One for trainers  
🔹 If `players[i] <= trainers[j]`, assign and move both pointers.  
🔹 Else, move trainer pointer forward.  

📊 **Time Complexity**: `O(n log n + m log m)`  
📦 **Space Complexity**: `O(1)`  
🧠 **Topics**: Greedy, Sorting, Two Pointers  

## 📌 Notes  

- Brute force works but is too slow for large inputs.  
- Greedy with sorting is the **optimal industry-standard approach**.  
- This problem is conceptually similar to **Assign Cookies (LeetCode 455)**.  