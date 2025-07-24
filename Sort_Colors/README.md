🎨 Sort Colors
🔗 LeetCode 75
📚 Tags: Array, Two Pointers, Sorting
🏷️ Level: Medium

🧠 Problem Summary

Given an array nums containing only 0, 1, and 2, sort them in-place so that all 0s come first, then 1s, and all 2s at the end — without using any built-in sort functions.

This is known as the Dutch National Flag Problem.

🛠️ Brute Force Approach

🔹 Count the number of 0s, 1s, and 2s in the array.
🔹 Overwrite the array with that many 0s, followed by 1s, and then 2s.

📊 Time Complexity: O(n)
📦 Space Complexity: O(1) (no extra array used, just counts)
🧠 Topics: Array, Counting

⚡ Optimal Approach (Dutch National Flag Algorithm)

🔹 Use 3 pointers: low, mid, and high.
🔹 Loop through the array with mid pointer and swap values to their correct regions:

If nums[mid] == 0: swap with low, increment both.
If nums[mid] == 1: just move mid.
If nums[mid] == 2: swap with high, decrement high.

📊 Time Complexity: O(n)
📦 Space Complexity: O(1)
🧠 Topics: Two Pointers, In-place Sorting, Dutch Flag Algorithm

📌 Notes

Great example of in-place partitioning
Binary/3-way logic is more efficient than simple counting
A classic problem that improves pointer manipulation
Often asked in interviews to test low-level array mastery