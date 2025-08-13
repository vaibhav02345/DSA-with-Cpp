🧠 Find the Duplicate Number

🔗 Link: [LeetCode 287](https://leetcode.com/problems/find-the-duplicate-number/)  
🏷️ Tags: Array, Two Pointers, Binary Search, Floyd’s Cycle Detection  
📶 Level: Medium

✅ Optimal Approach

🔹 Use **Floyd’s Tortoise and Hare** (Cycle Detection) to find the duplicate without modifying the array.  
🔹 Treat the array as a **linked list** where `nums[i]` is the next pointer.  
🔹 Phase 1: Find intersection point of slow and fast pointers.  
🔹 Phase 2: Reset one pointer to start, move both one step at a time until they meet → this meeting point is the duplicate number.

> Efficient `O(n)` solution with constant space, without changing the input array.

⏱️ Complexity

- Time: `O(n)`  
- Space: `O(1)`

🧠 Concepts Used

- **Floyd’s Tortoise and Hare** algorithm  
- Linked list cycle detection analogy  
- In-place traversal using array indices as pointers  
- No extra data structures needed

📌 Notes

- ⚠️ Don’t modify the original array → required by problem constraints.  
- 🚫 Avoid using extra sets or sorting (would increase space/time complexity).  
- ✅ Works even if the duplicate appears multiple times.  
- 🧵 Guaranteed duplicate due to **pigeonhole principle**.