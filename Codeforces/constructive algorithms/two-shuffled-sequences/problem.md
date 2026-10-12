# C. Two Shuffled Sequences
**Platform:** Codeforces
**Difficulty:** N/A
**Topic:** constructive algorithms

## Problem Statement
C. Two Shuffled Sequences
time limit per test2 seconds
memory limit per test256 megabytes

Two integer sequences existed initially — one of them was strictly increasing, and the other one — strictly decreasing.

Strictly increasing sequence is a sequence of integers 
[
x
1
<
x
2
<⋯<
x
k
]
[
𝑥
1
<
𝑥
2
<
⋯
<
𝑥
𝑘
]
. And strictly decreasing sequence is a sequence of integers 
[
y
1
>
y
2
>⋯>
y
l
]
[
𝑦
1
>
𝑦
2
>
⋯
>
𝑦
𝑙
]
. Note that the empty sequence and the sequence consisting of one element can be considered as increasing or decreasing.

They were merged into one sequence 
a
𝑎
. After that sequence 
a
𝑎
 got shuffled. For example, some of the possible resulting sequences 
a
𝑎
 for an increasing sequence 
[1,3,4]
[
1
,
3
,
4
]
 and a decreasing sequence 
[10,4,2]
[
10
,
4
,
2
]
 are sequences 
[1,2,3,4,4,10]
[
1
,
2
,
3
,
4
,
4
,
10
]
 or 
[4,2,1,10,4,3]
[
4
,
2
,
1
,
10
,
4
,
3
]
.

This shuffled sequence 
a
𝑎
 is given in the input.

Your task is to find any two suitable initial sequences. One of them should be strictly increasing and the other one — strictly decreasing. Note that the empty sequence and the sequence consisting of one element can be considered as increasing or decreasing.

If there is a contradiction in the input and it is impossible to split the given sequence 
a
𝑎
 to increasing and decreasing sequences, print "NO".

Input

The first line of the input contains one integer 
n
𝑛
 (
1≤n≤2⋅
10
5
1
≤
𝑛
≤
2
⋅
10
5
) — the number of elements in 
a
𝑎
.

The second line of the input contains 
n
𝑛
 integers 
a
1
,
a
2
,…,
a
n
𝑎
1
,
𝑎
2
,
…
,
𝑎
𝑛
 (
0≤
a
i
≤2⋅
10
5
0
≤
𝑎
𝑖
≤
2
⋅
10
5
), where 
a
i
𝑎
𝑖
 is the 
i
𝑖
-th element of 
a
𝑎
.

Output

If there is a contradiction in the input and it is impossible to split the given sequence 
a
𝑎
 to increasing and decreasing sequences, print "NO" in the first line.

Otherwise print "YES" in the first line and any two suitable sequences. Note that the empty sequence and the sequence consisting of one element can be considered as increasing or decreasing.

In the second line print 
n
i
𝑛
𝑖
 — the number of elements in the strictly increasing sequence. 
n
i
𝑛
𝑖
 can be zero, in this case the increasing sequence is empty.

In the third line print 
n
i
𝑛
𝑖
 integers 
in
c
1
,in
c
2
,…,in
c
n
i
𝑖
𝑛
𝑐
1
,
𝑖
𝑛
𝑐
2
,
…
,
𝑖
𝑛
𝑐
𝑛
𝑖
 in the increasing order of its values (
in
c
1
<in
c
2
<⋯<in
c
n
i
𝑖
𝑛
𝑐
1
<
𝑖
𝑛
𝑐
2
<
⋯
<
𝑖
𝑛
𝑐
𝑛
𝑖
) — the strictly increasing sequence itself. You can keep this line empty if 
n
i
=0
𝑛
𝑖
=
0
 (or just print the empty line).

In the fourth line print 
n
d
𝑛
𝑑
 — the number of elements in the strictly decreasing sequence. 
n
d
𝑛
𝑑
 can be zero, in this case the decreasing sequence is empty.

In the fifth line print 
n
d
𝑛
𝑑
 integers 
de
c
1
,de
c
2
,…,de
c
n
d
𝑑
𝑒
𝑐
1
,
𝑑
𝑒
𝑐
2
,
…
,
𝑑
𝑒
𝑐
𝑛
𝑑
 in the decreasing order of its values (
de
c
1
>de
c
2
>⋯>de
c
n
d
𝑑
𝑒
𝑐
1
>
𝑑
𝑒
𝑐
2
>
⋯
>
𝑑
𝑒
𝑐
𝑛
𝑑
) — the strictly decreasing sequence itself. You can keep this line empty if 
n
d
=0
𝑛
𝑑
=
0
 (or just print the empty line).

n
i
+
n
d
𝑛
𝑖
+
𝑛
𝑑
 should be equal to 
n
𝑛
 and the union of printed sequences should be a permutation of the given sequence (in case of "YES" answer).

Examples
input
Copy
7
7 2 7 3 3 1 4

output
Copy
YES
2
3 7 
5
7 4 3 2 1 

input
Copy
5
4 3 1 5 3

output
Copy
YES
1
3 
4
5 4 3 1 

input
Copy
5
1 1 2 1 2

output
Copy
NO

input
Copy
5
0 1 2 3 4

output
Copy
YES
0

5
4 3 2 1 0