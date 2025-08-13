🧠 Set Matrix Zeroes

🔗 Link: [LeetCode 73](https://leetcode.com/problems/set-matrix-zeroes/)  
🏷️ Tags: Array, Matrix, In-place, Simulation  
📶 Level: Medium

✅ Optimal Approach

🔹 Use the **first row** and **first column** of the matrix as markers to track which rows and columns should be set to zero.  
🔹 Maintain two flags to check whether the **first row** or **first column** should be zeroed.  
🔹 First pass: mark the first row and column for every cell that contains zero.  
🔹 Second pass: set matrix cells to zero based on these markers.  
🔹 Finally, update the first row and column if the flags indicate they should be zeroed.

> Efficient `O(m × n)` time and `O(1)` extra space, done completely in-place.

⏱️ Complexity

- Time: `O(m × n)`  
- Space: `O(1)`

🧠 Concepts Used

- In-place matrix modification  
- Using matrix's first row/column as auxiliary storage  
- Two-pass scanning  
- Flag variables to preserve first row/column state

📌 Notes

- ⚠️ Avoid creating extra row/column marker arrays — will increase space complexity.  
- 🚫 Be careful to process **first row and first column last** to avoid overwriting markers prematurely.  
- ✅ Works for any `m × n` matrix size.  
- 🧵 Handles multiple zeroes in the same row/column.