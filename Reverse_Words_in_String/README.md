## 🧠 Reverse Words in a String

🔗 Link: [LeetCode 151](https://leetcode.com/problems/reverse-words-in-a-string/)  
🏷️ Tags: String, Two-Pointer, In-place, Simulation  
📶 Level: Medium  

✅ **Optimal Approach**  

🔹 First, **remove extra spaces** in-place (leading, trailing, and multiple spaces between words).  
🔹 **Reverse the entire string** to get the words in reverse order but with characters reversed.  
🔹 **Reverse each individual word** to restore the correct order of characters within the words.  
🔹 All operations are done **in-place** without allocating extra arrays.  

> Efficient `O(n)` time and `O(1)` extra space, works directly on the string.

⏱️ **Complexity**  

- Time: `O(n)` — Single pass for space removal + two passes for reversal.  
- Space: `O(1)` — Done entirely in-place.  

🧠 **Concepts Used**  

- Two-pointer technique for in-place editing  
- String reversal operations  
- In-place word manipulation  

📌 **Notes**  

- ⚠️ Carefully handle spaces during removal to avoid adding extra at the end.  
- 🚫 Avoid creating extra arrays — this breaks the `O(1)` space requirement.  
- ✅ Works for any length string and multiple spaces between words.