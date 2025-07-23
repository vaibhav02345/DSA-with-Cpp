🗳️ Majority Element

Link: [LeetCode 169](https://leetcode.com/problems/majority-element/)  
Tags: Array, Hash Table, Divide and Conquer, Sorting, Counting  
Level: Easy

✅ Approaches

🔹 Brute Force  

Count the frequency of each element using nested loops.  
Return the one that appears more than n/2 times.

Time: O(n²)  
Space: O(1)  

🔹 Optimal (Boyer-Moore Voting Algorithm)

Keep a count and a candidate.  
Increment if same, decrement if different.  
Majority element is guaranteed to exist.

Time: O(n)  
Space: O(1)  

🧠 Concepts Used  

- Frequency count  
- Voting technique  
- Divide and conquer logic  
- Linear time majority check

📌 Notes  

- Brute is good for understanding, but not scalable.  
- Boyer-Moore is a must-know — efficient and elegant.  
- Very common in coding rounds and interviews.
