🎯 Subarray Sum Equals K

🔗 [LeetCode - 560](https://leetcode.com/problems/subarray-sum-equals-k/)  
📚 **Tags:** Array, Prefix Sum, Hash Map  
🏷️ **Level:** Medium  

🧠 Problem Summary

You are given an integer array `nums` and an integer `k`.  
You need to find the **total number of contiguous subarrays** whose sum equals `k`.
A subarray is a **contiguous** non-empty sequence of elements within the array.

🛠️ Brute Force Approach

Steps:

1. Use two nested loops:
   - Outer loop → starting index of subarray  
   - Inner loop → ending index of subarray
2. Keep a running sum for each subarray.
3. Increment count whenever sum equals `k`.

**Time Complexity:** `O(n²)`  
**Space Complexity:** `O(1)`  
**Topics:** Nested Loops, Prefix Calculation (naive)

⚡ Optimal Approach

Idea:
Use **Prefix Sum + Hash Map** to count subarrays in **O(n)**.

Steps:

1. Maintain `currSum` as running sum of elements.
2. Use a hash map `prefixCount` to store:
   - **Key:** prefix sum value  
   - **Value:** frequency of that prefix sum
3. For each element:
   - Add it to `currSum`
   - If `(currSum - k)` exists in `prefixCount`,  
     it means there’s a previous prefix sum that allows a subarray ending here to sum to `k`
   - Add the frequency of `(currSum - k)` to the answer
   - Increment the count of `currSum` in `prefixCount`

**Time Complexity:** `O(n)`  
**Space Complexity:** `O(n)`  
**Topics:** Prefix Sum, Hash Map

📌 Notes

- Optimal approach is much faster for large inputs (up to `2 * 10⁴` elements)
- Brute force is useful for learning but will **time out** for big arrays
- Understanding prefix sums is key for advanced array problems