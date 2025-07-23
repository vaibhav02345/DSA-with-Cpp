🧩 Product of Array Except Self

Link: [LeetCode 238](https://leetcode.com/problems/product-of-array-except-self/)  
Tags: Array, Prefix Sum  
Level: Medium

✅ Brute Force

🔹 For each index, multiply all other elements except the current one.  
Time: O(n²)  
Space: O(1)  

⚡ Optimal Approach

🔹 Use prefix and suffix product arrays to avoid division and reduce time complexity.  
🔹 Final result is the product of prefix (left) and suffix (right) for each index.

Steps:
- Build prefix product array from left to right.  
- Build suffix product array from right to left.  
- Multiply them to get the result for each index.

Time: O(n)  
Space: O(n) → can be optimized to O(1) (excluding output array)

🧠 Concepts Used  

- Prefix product  
- Suffix product  
- Array traversal without division  
- Space-time optimization strategies

📌 Notes  

- Division is not allowed.  
- Final space can be reduced by using output array to store intermediate prefix results.  
- One of the most commonly asked array pattern problems.