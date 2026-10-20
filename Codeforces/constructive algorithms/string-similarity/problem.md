# A. String Similarity
**Platform:** Codeforces
**Difficulty:** N/A
**Topic:** constructive algorithms

## Problem Statement
A. String Similarity
time limit per test2 seconds
memory limit per test256 megabytes

A binary string is a string where each character is either 0 or 1. Two binary strings 
a
𝑎
 and 
b
𝑏
 of equal length are similar, if they have the same character in some position (there exists an integer 
i
𝑖
 such that 
a
i
=
b
i
𝑎
𝑖
=
𝑏
𝑖
). For example:

10010 and 01111 are similar (they have the same character in position 
4
4
);
10010 and 11111 are similar;
111 and 111 are similar;
0110 and 1001 are not similar.

You are given an integer 
n
𝑛
 and a binary string 
s
𝑠
 consisting of 
2n−1
2
𝑛
−
1
 characters. Let's denote 
s[l..r]
𝑠
[
𝑙
.
.
𝑟
]
 as the contiguous substring of 
s
𝑠
 starting with 
l
𝑙
-th character and ending with 
r
𝑟
-th character (in other words, 
s[l..r]=
s
l
s
l+1
s
l+2
…
s
r
𝑠
[
𝑙
.
.
𝑟
]
=
𝑠
𝑙
𝑠
𝑙
+
1
𝑠
𝑙
+
2
…
𝑠
𝑟
).

You have to construct a binary string 
w
𝑤
 of length 
n
𝑛
 which is similar to all of the following strings: 
s[1..n]
𝑠
[
1..
𝑛
]
, 
s[2..n+1]
𝑠
[
2..
𝑛
+
1
]
, 
s[3..n+2]
𝑠
[
3..
𝑛
+
2
]
, ..., 
s[n..2n−1]
𝑠
[
𝑛
.
.2
𝑛
−
1
]
.

Input

The first line contains a single integer 
t
𝑡
 (
1≤t≤1000
1
≤
𝑡
≤
1000
) — the number of test cases.

The first line of each test case contains a single integer 
n
𝑛
 (
1≤n≤50
1
≤
𝑛
≤
50
).

The second line of each test case contains the binary string 
s
𝑠
 of length 
2n−1
2
𝑛
−
1
. Each character 
s
i
𝑠
𝑖
 is either 0 or 1.

Output

For each test case, print the corresponding binary string 
w
𝑤
 of length 
n
𝑛
. If there are multiple such strings — print any of them. It can be shown that at least one string 
w
𝑤
 meeting the constraints always exists.

Example
input
Copy
4
1
1
3
00000
4
1110000
2
101

output
Copy
1
000
1010
00

Note

The explanation of the sample case (equal characters in equal positions are bold):

The first test case:

1
1
 is similar to 
s[1..1]=1
𝑠
[
1..1
]
=
1
.

The second test case:

000
000
 is similar to 
s[1..3]=000
𝑠
[
1..3
]
=
000
;
000
000
 is similar to 
s[2..4]=000
𝑠
[
2..4
]
=
000
;
000
000
 is similar to 
s[3..5]=000
𝑠
[
3..5
]
=
000
.

The third test case:

1010
1
0
10
 is similar to 
s[1..4]=1110
𝑠
[
1..4
]
=
1
1
10
;
1010
1
01
0
 is similar to 
s[2..5]=1100
𝑠
[
2..5
]
=
1
10
0
;
1010
10
1
0
 is similar to 
s[3..6]=1000
𝑠
[
3..6
]
=
10
0
0
;
1010
1
0
1
0
 is similar to 
s[4..7]=0000
𝑠
[
4..7
]
=
0
0
0
0
.

The fourth test case:

00
0
0
 is similar to 
s[1..2]=10
𝑠
[
1..2
]
=
1
0
;
00
0
0
 is similar to 
s[2..3]=01
𝑠
[
2..3
]
=
0
1
.