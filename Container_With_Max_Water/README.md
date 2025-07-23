🚰 Container With Most Water

Link: [LeetCode 11](https://leetcode.com/problems/container-with-most-water/)  
Tags: Array, Two Pointers, Greedy  
Level: Medium

✅ Approach

🔹 Optimal (Two Pointer Technique)

Start from both ends and move the pointer pointing to the shorter line.  
At each step, calculate the area and track the maximum.

Time: O(n)  
Space: O(1)  

🧠 Concepts Used  

- Two pointer technique 
- Area = width × min(height)  
- Greedy reduction of search space

📌 Notes  

- Brute force would take O(n²), but this pointer strategy brings it down to linear time.  
- A great mix of geometry, logic, and optimization.  
- Popular problem for testing pointer movement reasoning.
