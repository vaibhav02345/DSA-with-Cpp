🧩 Next Permutation

Link: [LeetCode 31](https://leetcode.com/problems/next-permutation/)  
Tags: Array, Two Pointers  
Level: Medium

🧠 Problem Summary  
Given an array of integers `nums`, rearrange them into the lexicographically next greater permutation.  
If such arrangement is not possible (i.e., the array is in descending order), rearrange it as the lowest possible order (i.e., sorted in ascending order).  
The transformation must be done **in-place** with only **constant extra memory**.

⚡ Optimal Approach

🔹 Step 1: Traverse from right to left and find the first index `i` such that `nums[i] < nums[i + 1]`.  
🔹 Step 2: If such index exists, find the smallest element on right side of `i` which is greater than `nums[i]`, and swap them.  
🔹 Step 3: Reverse the subarray from `i + 1` to the end of the array.  
🔹 This generates the next lexicographical permutation in-place.

📊 Time Complexity: O(n)  
📦 Space Complexity: O(1)  
🧠 Topics: Array, Two Pointers, In-place Algorithm

📌 Notes

- This algorithm avoids generating all permutations  
- Smart use of two pointers and reverse to find the next permutation efficiently  
- Reversing the suffix after a pivot point ensures minimal increase  
- The logic is commonly used in permutation generation algorithms