🏗️ Largest Rectangle in Histogram  

🔗 Link: [LeetCode 84](https://leetcode.com/problems/largest-rectangle-in-histogram/)  
🏷️ Tags: Array, Stack, Monotonic Stack  
🧱 Level: Hard  

🧠 Problem Summary  

Given an array of integers `heights` representing the histogram's bar heights (where each bar has a width of `1`),  
return the **area of the largest rectangle** that can be formed inside the histogram.  

🛠️ Brute Force Approach  

🔹 For each bar, expand **left** and **right** until you encounter a shorter bar.  
🔹 Calculate the rectangle area as `height × width`.  
🔹 Track the maximum area across all bars.  

📊 Time Complexity: O(n²)  
📦 Space Complexity: O(1)  
🧠 Topics: Array, Brute Force  

⚡ Optimal Approach (Monotonic Stack)  

🔹 Use a stack to maintain indices of increasing bar heights.  
🔹 When a smaller bar is found, pop from the stack and calculate area:  
   - Height = popped bar’s height  
   - Width = distance between current index and new stack top  
🔹 Repeat until stack is valid, then push current index.  
🔹 Add a dummy `0` height at the end to flush out remaining bars.  

📊 Time Complexity: O(n)  
📦 Space Complexity: O(n)  
🧠 Topics: Array, Stack, Monotonic Stack  

📌 Notes  

- Brute force is simple but slow for large `n`  
- The stack-based method is the optimal industry-standard solution  
- This problem is a building block for **Maximal Rectangle** (LeetCode 85)  