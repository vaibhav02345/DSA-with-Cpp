🎯 Merge Sorted Array  
🔗 [LeetCode 88](https://leetcode.com/problems/merge-sorted-array/)  
📚 Tags: Array, Two Pointers  
🏷️ Level: Easy  

🧠 Problem Summary

You are given two sorted arrays `nums1` and `nums2` of size `m` and `n`, respectively.  
Merge `nums2` into `nums1` as one sorted array in-place.  

Note:  
- `nums1` has enough space (size = m + n) to hold additional elements.  
- Only the first `m` elements in `nums1` are valid.  
- The rest are zeros and should be ignored during merging.

🛠️ Brute Force Approach

🔹 Copy all elements from `nums2` into `nums1` starting from index `m`  
🔹 Sort the entire `nums1` using built-in sort  

📊 Time Complexity: O((m+n) log(m+n))  
📦 Space Complexity: O(1)  
🧠 Topics: Array, Sorting  

⚡ Optimal Approach (Two Pointers from End)

🔹 Use three pointers:  
- `i` at end of `nums1`'s valid part (`m-1`)  
- `j` at end of `nums2` (`n-1`)  
- `k` at the end of the full array (`m+n-1`)  

🔹 Compare elements from the back, placing the larger at `k`  
🔹 If any elements remain in `nums2`, copy them  

📊 Time Complexity: O(m + n)  
📦 Space Complexity: O(1)  
🧠 Topics: Two Pointers, In-Place Merge  

📌 Notes

- This is a classic in-place merge problem  
- Optimal method avoids sorting and shifting elements  
- Clean way to handle sorted merging with no extra space  
- Frequently asked in interviews to test array manipulation under space constraints