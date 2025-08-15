# 🎯 Valid Anagram

**🔗 LeetCode:** [242. Valid Anagram](https://leetcode.com/problems/valid-anagram/)  
**📚 Tags:** String, Hash Table, Sorting  
**🏷️ Level:** Easy  

## 🧠 Problem Summary

Given two strings `s` and `t`, return `true` if `t` is an **anagram** of `s`, and `false` otherwise.  
An anagram is a word formed by rearranging the letters of another word.

## 🛠️ Brute Force Approach (Sorting)

🔹 If lengths differ, return `false`.  
🔹 Sort both strings and compare.  
🔹 If sorted versions are equal → they are anagrams.

**Complexity:**  
📊 Time Complexity: **O(n log n)**  
📦 Space Complexity: **O(1)** *(ignoring sorting stack space)*  
🧠 Topics: String, Sorting

## ⚡ Optimal Approach (Frequency Counting)

🔹 If lengths differ, return `false`.  
🔹 Use an array of size 26 to store character counts.  
🔹 Increment count for characters in `s` and decrement for characters in `t`.  
🔹 If all counts are `0` at the end → anagrams.

**Complexity:**  
📊 Time Complexity: **O(n)**  
📦 Space Complexity: **O(1)** *(fixed size array)*  
🧠 Topics: String, Hash Table, Frequency Counting

## 📌 Notes

- Sorting is simpler to implement, but frequency counting is more efficient.  
- Works for lowercase English letters — for Unicode or mixed-case, use a hash map.  
- Common warm-up problem for string manipulation and hashing concepts.