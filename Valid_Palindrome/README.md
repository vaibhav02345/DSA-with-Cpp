🧠 Valid Palindrome

🔗 Link: [LeetCode 125](https://leetcode.com/problems/valid-palindrome/)  
🏷️ Tags: Two Pointers, String  
📶 Level: Easy

✅ Optimal Approach

🔹 Use two pointers (`left` and `right`) to traverse the string from both ends.  
🔹 Skip non-alphanumeric characters using `isalnum()`.  
🔹 Compare characters in lowercase using `tolower()`.  
🔹 If mismatch → return false.  
🔹 If all characters match → return true.

> Efficient `O(n)` solution with constant space, without creating extra strings.

⏱️ Complexity

- Time: `O(n)`  
- Space: `O(1)`  

🧠 Concepts Used

- Two-pointer traversal  
- Character filtering (`isalnum`)  
- Case normalization (`tolower`)  
- In-place comparison  
- Clean and optimal string scan  

📌 Notes

- ⚠️ Don’t forget to include `<cctype>` for character functions.  
- 🚫 No need to build a new filtered string → saves space.  
- ✅ Handles edge cases like empty strings and all non-alphanumerics.  
- 🧵 Easy extension to handle Unicode with locale-aware checks (if needed).