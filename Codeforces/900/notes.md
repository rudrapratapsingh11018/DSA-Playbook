### 160A – Twins  
Concept: Greedy, Sorting  

Description:  
Given coin values, find the minimum number of coins such that their sum becomes strictly greater than the sum of remaining coins.

Approach:  
Sort coins in descending order. Keep picking the largest coin and add to your sum until it becomes greater than the remaining total.

Steps:
- Compute total sum of all coins  
- Sort coins in decreasing order  
- Keep adding coins to your sum  
- Stop when your sum > remaining sum  

Time Complexity: O(n log n) (due to sorting)  
Space Complexity: O(1)  
Key Insight:  
Picking larger coins first minimizes the number of coins needed (greedy choice).

### 58A – Chat room  
Concept: Subsequence checking  

Description:
can we form "hello" from the given string by skipping characters (but keeping the order)?
Trick: Use pointer to match characters of "hello" in order  

Time Complexity: O(n)  
Space Complexity: O(1)