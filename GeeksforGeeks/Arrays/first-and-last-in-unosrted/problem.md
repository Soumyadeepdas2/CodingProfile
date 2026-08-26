# GFG. First and Last in Unosrted
**Platform:** GeeksforGeeks
**Difficulty:** N/A
**Topic:** Arrays

## Problem Statement
Given an unsorted array arr[] of integers and a key which is present in this array. Find the start index (index where the element is first found from left in the array) and end index (index where the element is first found from right in the array). Return an array of length 2 with elements start index and end index.

Note: If the key does not exist in the array then return -1 for both start and end index.

Examples:

Input: arr[] = [1, 2, 3, 4, 5, 5], key = 5
Output: [4, 5]
Explanation: 5 appears first time at index 4 and appears last time at index 5.

Input: arr = [6, 5, 4, 3, 1, 2], key = 4
Output: [2, 2]
Explanation: 4 appears first time and last time at index 2.

Input: arr = [7, 8, 6], key = 2
Output: [-1, -1]
Explanation: Since 2 does not appear in the array, we will return -1 for both the start and end indices.


Constraints:
1 ≤ arr.size ≤ 105
1 ≤ arr[i], key ≤ 109