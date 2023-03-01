# String Sequence
Time Limit: 2 sec<br>
Memory Limit: 128000 kB
## Problem Statement
You are given a sequence of 26 integers P=(P<sub>1</sub>, P<sub>2</sub>, …, P<sub>26</sub> ) consisting of integers from 1 through 26. It is guaranteed that all elements in P are distinct.

Print a string S of length 26 that satisfies the following condition. For every i (1 ≤ i ≤ 26), the i<sup>th</sup> character of S is the lowercase English letter that comes P<sub>i</sub><sup>th</sup> in alphabetical order.
## Input
The input contains 26 space separated integers as follows:
> P<sub>1</sub> P<sub>2</sub> ... P<sub>26</sub>

## Constraints
> 1 ≤ P<sub>i</sub> ≤ 26

`All values in input are integers.`
## Output
Print the string S.
## Example
### Sample Input 1
> 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
### Sample Output 1
> abcdefghijklmnopqrstuvwxyz

### Sample Input 2
> 2 1 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
### Sample Output 2
> bacdefghijklmnopqrstuvwxyz

### Sample Input 3
> 5 11 12 16 25 17 18 1 7 10 4 23 20 3 2 24 26 19 14 9 6 22 8 13 15 21
### Sample Output 3
> eklpyqragjdwtcbxzsnifvhmou
