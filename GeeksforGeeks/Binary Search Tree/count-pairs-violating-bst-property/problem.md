# GFG. Count Pairs Violating BST Property
**Platform:** GeeksforGeeks
**Difficulty:** N/A
**Topic:** Binary Search Tree

## Problem Statement
Given root of a binary tree in which all node values are distinct, count pairs of nodes that violate any of the following Binary Search Tree (BST) properties.

All values in the left subtree are strictly smaller.
All values in the right subtree are strictly greater.

Examples:

Input: root[] = [10, 50, 40, N, N, 20, 30]

Output: 5
Explanation: Pairs violating BST property are:-
(10, 50), 10 should be greater than its left child value.
(40, 30), 40 should be less than its right child value.
(50, 20), (50, 30) and (50, 40), maximum of left subtree of 10 is 50 greater than 20, 30 and 40 of its right subtree.
Input: root[] = [80, 40, 30, 70, N, 60, 50]

Output: 10
Explanation: There are total 10 pairs (80, 30), (80, 60), (80, 50), (30, 60), (40, 70), (40, 30), (40, 50), (70, 30), (70, 60), (70, 50) which violate the BST properties.