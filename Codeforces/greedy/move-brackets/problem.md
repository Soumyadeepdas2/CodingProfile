# C. Move Brackets
**Platform:** Codeforces
**Difficulty:** N/A
**Topic:** greedy

## Problem Statement
C. Move Brackets
time limit per test1 second
memory limit per test256 megabytes

You are given a bracket sequence 
s
𝑠
 of length 
n
𝑛
, where 
n
𝑛
 is even (divisible by two). The string 
s
𝑠
 consists of 
n
2
𝑛
2
 opening brackets '(' and 
n
2
𝑛
2
 closing brackets ')'.

In one move, you can choose exactly one bracket and move it to the beginning of the string or to the end of the string (i.e. you choose some index 
i
𝑖
, remove the 
i
𝑖
-th character of 
s
𝑠
 and insert it before or after all remaining characters of 
s
𝑠
).

Your task is to find the minimum number of moves required to obtain regular bracket sequence from 
s
𝑠
. It can be proved that the answer always exists under the given constraints.

Recall what the regular bracket sequence is:

"()" is regular bracket sequence;
if 
s
𝑠
 is regular bracket sequence then "(" + 
s
𝑠
 + ")" is regular bracket sequence;
if 
s
𝑠
 and 
t
𝑡
 are regular bracket sequences then 
s
𝑠
 + 
t
𝑡
 is regular bracket sequence.

For example, "()()", "(())()", "(())" and "()" are regular bracket sequences, but ")(", "()(" and ")))" are not.

You have to answer 
t
𝑡
 independent test cases.

Input

The first line of the input contains one integer 
t
𝑡
 (
1≤t≤2000
1
≤
𝑡
≤
2000
) — the number of test cases. Then 
t
𝑡
 test cases follow.

The first line of the test case contains one integer 
n
𝑛
 (
2≤n≤50
2
≤
𝑛
≤
50
) — the length of 
s
𝑠
. It is guaranteed that 
n
𝑛
 is even. The second line of the test case containg the string 
s
𝑠
 consisting of 
n
2
𝑛
2
 opening and 
n
2
𝑛
2
 closing brackets.

Output

For each test case, print the answer — the minimum number of moves required to obtain regular bracket sequence from 
s
𝑠
. It can be proved that the answer always exists under the given constraints.

Example
input
Copy
4
2
)(
4
()()
8
())()()(
10
)))((((())

output
Copy
1
0
1
3

Note

In the first test case of the example, it is sufficient to move the first bracket to the end of the string.

In the third test case of the example, it is sufficient to move the last bracket to the beginning of the string.

In the fourth test case of the example, we can choose last three openning brackets, move them to the beginning of the string and obtain "((()))(())".