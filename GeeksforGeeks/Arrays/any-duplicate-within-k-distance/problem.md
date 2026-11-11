# GFG. Any Duplicate Within K Distance
**Platform:** GeeksforGeeks
**Difficulty:** N/A
**Topic:** Arrays

## Problem Statement
Given an array of integers, arr[] and an integer k, check whether there exist two distinct indices i and j such that arr[i] is equal to arr[j] and the absolute difference between i and j is at most k.

Examples:

Input: arr[] = [1, 5, 4, 5, 1], k = 3
Output: true
Explanation: The element 5 occurs at indices 1 and 3. Their distance is |3 - 1| = 2, which is less than or equal to k.
Input: arr[] = [10, 2, 3, 4, 10, 5], k = 3
Output: false
Explanation: The element 10 occurs at indices 0 and 4. Their distance is |4 - 0| = 4, which is greater than k. Hence, no duplicate exists within the given distance.
Input: arr[] = [5, 1, 3, 2, 4], k = 3
Output: false
Explanation: All elements are distinct, so no duplicate exists.