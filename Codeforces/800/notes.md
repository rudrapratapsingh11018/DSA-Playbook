https://codeforces.com/problemset/submit 
# Codeforces 800 Level Solutions

This folder contains solutions to Codeforces problems of difficulty ~800, focused on building strong fundamentals in implementation and problem solving.

## Problems Solved

### 4A – Watermelon  
Description: Check if a number can be split into two even parts.  
Approach: If the number is greater than 2 and even, print YES; otherwise NO.  
Time Complexity: O(1) | Space Complexity: O(1)

---

### 50A – Domino Piling  
Description: Find the maximum number of dominoes that can fit in an m × n board.  
Approach: Each domino covers 2 cells, so the answer is (m × n) / 2.  
Time Complexity: O(1) | Space Complexity: O(1)

---

### 69A – Young Physicist  
Description: Check if the sum of all given 3D vectors is zero.  
Approach: Sum all x, y, z components and verify they are all zero.  
Time Complexity: O(n) | Space Complexity: O(1)

---

### 71A – Way Too Long Words  
Description: Shorten words longer than 10 characters.  
Approach: Replace middle characters with count: first + (length - 2) + last.  
Time Complexity: O(n) | Space Complexity: O(1)

---

### 96A – Football  
Description: Determine if there are at least 7 consecutive identical characters.  
Approach: Traverse string and count consecutive characters; if count ≥ 7, print YES.  
Time Complexity: O(n) | Space Complexity: O(1)

---

### 266A – Stones on the Table  
Description: Remove minimum stones so no two adjacent stones are the same.  
Approach: Count the number of adjacent equal characters.  
Time Complexity: O(n) | Space Complexity: O(1)

---

## Topics
Implementation  
Strings  
Basic Math  

## Language
C++