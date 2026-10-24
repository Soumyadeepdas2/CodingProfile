# SHKNUM. Welcome to the CodeChef AI Tutor
**Platform:** CodeChef
**Difficulty:** N/A
**Topic:** Binary Search

## Problem Statement
Sheokand and Number

Sheokand is good at mathematics. One day, to test his math skills, Kaali gave him an integer 
𝑁
N. To impress Kaali, Sheokand has to convert 
𝑁
N into an integer 
𝑀
M that can be represented in the form 
2
𝑥
+
2
𝑦
2
x
+2
y
 (where 
𝑥
x and 
𝑦
y are non-negative integers such that 
𝑥
≠
𝑦
x

=y). In order to do that, he can perform two types of operations:

add 
1
1 to 
𝑁
N
subtract 
1
1 from 
𝑁
N

However, Sheokand is preparing for his exams. Can you help him find the minimum number of operations required to convert 
𝑁
N into a valid integer 
𝑀
M?

Input
The first line of the input contains a single integer 
𝑇
T denoting the number of test cases. The description of 
𝑇
T test cases follows.
The first and only line of each testcase contains a single integer 
𝑁
N.
Output

For each test case, print a single line containing one integer — the minimum required number of operations.

Constraints
1
≤
𝑇
≤
100
,
000
1≤T≤100,000
1
≤
𝑁
≤
10
9
1≤N≤10
9
Subtasks

Subtask #1 (30 points): 
1
≤
𝑇
≤
1
,
000
1≤T≤1,000

Subtask #2 (70 points): original constraints

Sample 1:
Input
Output
3
10
22
4
0
2
1
Explanation:

Example case 1: 
𝑁
=
10
N=10 is already in the form 
2
𝑥
+
2
𝑦
2
x
+2
y
, with 
𝑥
=
3
x=3 and 
𝑦
=
1
y=1.

Example case 2: 
𝑁
=
22
N=22 can be converted into 
𝑀
=
20
=
2
2
+
2
4
M=20=2
2
+2
4
 or 
𝑀
=
24
=
2
3
+
2
4
M=24=2
3
+2
4
 in two operations.

Example case 3: 
𝑁
=
4
N=4 can be converted into 
𝑀
=
3
=
2
0
+
2
1
M=3=2
0
+2
1
 or 
𝑀
=
5
=
2
0
+
2
2
M=5=2
0
+2
2
 in one operation.