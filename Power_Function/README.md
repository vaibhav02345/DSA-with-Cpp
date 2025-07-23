⚡ Power Function

Link: [LeetCode 50](https://leetcode.com/problems/powx-n/)  
Tags: Math, Recursion  
Level: Medium

✅ Approach

🔹 Binary Exponentiation (Iterative)

1. If the power `n` is negative, invert the base `x` and make `n` positive.
2. Use binary exponentiation (divide & conquer idea).
3. Multiply the base only when the current bit is `1`.

Time: O(log n)  
Space: O(1)  

🧠 Concepts Used  

- Binary exponentiation  
- Bitwise logic for optimization  
- Math fundamentals of powers  
- Edge cases (negative powers, zero power)

📌 Notes  

- Efficiently handles very large exponents.  
- Avoids recursion stack by using an iterative approach.  
- Converts `n` to long to avoid overflow when `n = INT_MIN`.
