📈 Best Time to Buy and Sell Stock

Link: [LeetCode 121](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) 
Tags: Array, Dynamic Programming  
Level: Easy

✅ Approaches

🔹 Optimized (One Pass)  

Tried every possible pair of buy and sell days to find max profit.
Kept track of the minimum price so far.  
At each step, calculated the best profit if sold today.

Time: O(n)  
Space: O(1)  

🧠 Concepts Used

- Tracking state with variables  
- One-pass scan  
- Greedy Algorithm
- Profit calculation  
- Space optimization

📌 Notes  

- Classic stock problem, great for building DP intuition.  
- Focus is on picking the lowest buying point and selling at the best possible price after that.
- Clean logic, no extra space used.