🧠 Longest Substring Without Repeating Characters

🔗 Link: [LeetCode 3](https://leetcode.com/problems/longest-substring-without-repeating-characters/)  
🏷️ Tags: Hash Table, String, Sliding Window  
📶 Level: Medium

✅ Optimal Approach

🔹 Use a sliding window with two pointers (`left` and `right`).  
🔹 Maintain a set to store unique characters in the current window.  
🔹 If `s[right]` is not in the set → insert it, update max length.  
🔹 If duplicate found → remove `s[left]` and move `left` forward.  
🔹 Repeat till `right` reaches the end of the string.

> Efficient `O(n)` solution using dynamic window and constant space.

⏱️ Complexity

- Time: `O(n)`  
- Space: `O(min(n, m))` → `m` = size of charset (128 for ASCII)

🧠 Concepts Used

- Sliding Window  
- Hashing (`unordered_set`)  
- Two-pointer technique  
- Window resizing logic  
- Greedy approach

📌 Notes

- 🎯 Focus is on expanding the window only when there's no duplicate.  
- 🔁 Shrink from the left until the duplicate is removed.  
- 💯 Classic pattern for many real-time constraint problems.  
- 🚀 Solid base for harder string or sliding window problems later.