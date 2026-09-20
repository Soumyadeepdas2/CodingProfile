# A. Wrong Subtraction
**Platform:** Codeforces
**Difficulty:** N/A
**Topic:** implementation

## Problem Statement
A. Wrong Subtraction
time limit per test1 second
memory limit per test256 megabytes

Little girl Tanya is learning how to decrease a number by one, but she does it wrong with a number consisting of two or more digits. Tanya subtracts one from a number by the following algorithm:

if the last digit of the number is non-zero, she decreases the number by one;
if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).

You are given an integer number 
n
𝑛
. Tanya will subtract one from it 
k
𝑘
 times. Your task is to print the result after all 
k
𝑘
 subtractions.

It is guaranteed that the result will be positive integer number.

Input

The first line of the input contains two integer numbers 
n
𝑛
 and 
k
𝑘
 (
2≤n≤
10
9
2
≤
𝑛
≤
10
9
, 
1≤k≤50
1
≤
𝑘
≤
50
) — the number from which Tanya will subtract and the number of subtractions correspondingly.

Output

Print one integer number — the result of the decreasing 
n
𝑛
 by one 
k
𝑘
 times.

It is guaranteed that the result will be positive integer number.

Examples
input
Copy
512 4

output
Copy
50

input
Copy
1000000000 9

output
Copy
1

Note

The first example corresponds to the following sequence: 
512→511→510→51→50
512
→
511
→
510
→
51
→
50
.