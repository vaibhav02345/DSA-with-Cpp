🎯 Find the Missing and Repeated Values  
🔗 [LeetCode - 2965](https://leetcode.com/problems/find-missing-and-repeated-values/)  
📚 Tags: Array, Math, Brute Force, Hashing  
🏷️ Level: Easy  

🧠 Problem Summary

You're given a 2D `n x n` grid containing all numbers from `1` to `n^2`,  
with one number missing and one number repeated.  
Return a vector with:  
  🔸 First = Repeated number  
  🔸 Second = Missing number  

🛠️ Brute Force Approach

🔹 Flatten the 2D grid into a 1D vector.  
🔹 Use a hash map (or frequency array) to count each number.  
🔹 Traverse from `1` to `n^2` and find:  
  - Number with count 2 → repeated  
  - Number with count 0 → missing  

📊 Time Complexity: O(n²)  
📦 Space Complexity: O(n²)  
🧠 Topics: Hash Map, Counting  

⚡ Optimal Approach

🔹 Use a single frequency array of size `n^2 + 1`.  
🔹 While iterating:  
  - Track repeated if frequency becomes 2  
  - Then check from `1` to `n^2` again to find which count is 0 (missing)  

📊 Time Complexity: O(n²)  
📦 Space Complexity: O(n²)  
🧠 Topics: Frequency Count, Array  

📌 Notes

- Very beginner-friendly question to practice mapping and 2D to 1D logic  
- Perfect warm-up for hash map based questions  
