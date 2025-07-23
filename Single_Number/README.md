🧩 Single Number

Link: [LeetCode 136](https://leetcode.com/problems/single-number/)  
Tags: Array, Bit Manipulation  
Level: Easy

🧠 Problem Summary  
Given a non-empty array of integers where every element appears twice except for one, find that single one.

🛠️ Brute Force Approach

🔹 Use a hash map or unordered_map to count frequency of each element.  
🔹 Return the element with frequency 1.

📊 Time Complexity: O(n)  
📦 Space Complexity: O(n)  
🧠 Topics: Array, Hashing

⚡ Optimal Approach

🔹 Use XOR (`^`) operator.  
   - Property: `a ^ a = 0` and `a ^ 0 = a`  
   - XOR all elements → pairs cancel out → single number remains.

📊 Time Complexity: O(n)  
📦 Space Complexity: O(1)  
🧠 Topics: Array, Bit Manipulation

📌 Notes  

- Array traversal and frequency counting  
- XOR tricks and bitwise operations  
- Eliminating extra space using bit manipulation  
- When to use hash maps vs. bitwise techniques