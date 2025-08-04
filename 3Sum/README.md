🧩 Three Sum

🔗 Link: [LeetCode 15](https://leetcode.com/problems/3sum/)  
🏷️ Tags: Array, Two Pointers, Sorting  
🧱 Level: Medium

🧠 Problem Summary  

Given an integer array `nums`, return all unique triplets `[nums[i], nums[j], nums[k]]` such that:  
- `i ≠ j`, `i ≠ k`, and `j ≠ k`  
- `nums[i] + nums[j] + nums[k] == 0`  

You must not include duplicate triplets in the result.

🛠️ Brute Force Approach

🔹 Use three nested loops to check every possible triplet.  
🔹 For each triplet, check if the sum is 0.  
🔹 Sort and store valid triplets in a set to avoid duplicates.  
🔹 Convert the set back to a vector before returning.

📊 Time Complexity: O(n³)  
📦 Space Complexity: O(k), where `k` is number of unique triplets  
🧠 Topics: Array, Brute Force, Hashing

⚡ Optimal Approach

🔹 First, sort the array.  
🔹 Fix one element and use two pointers (`left`, `right`) to find other two elements.  
🔹 Skip duplicates to ensure only unique triplets are returned.  
🔹 Move pointers based on the sum:  
   - If sum = 0 → store it and move both pointers  
   - If sum < 0 → move `left++`  
   - If sum > 0 → move `right--`

📊 Time Complexity: O(n²)  
📦 Space Complexity: O(1) (excluding output)  
🧠 Topics: Array, Two Pointers, Sorting

📌 Notes  

- Sorting the array is crucial for duplicate skipping and pointer movement  
- Brute force is intuitive but slow for large inputs  
- The two-pointer approach is elegant and optimized  
- Always watch out for duplicate triplets when returning combinations