# Multiple of 3
Time Limit: 2 sec<br>
Memory Limit: 128000 kB
## Problem Statement
Given is a positive integer N, where none of the digits is 0. Let k be the number of digits in N. We want to make a multiple of 3 by erasing at least 0 and at most k−1 digits from N and concatenating the remaining digits without changing the order. Determine whether it is possible to make a multiple of 3 in this way. If it is possible, find the minimum number of digits that must be erased to make such a number.
## Input
The input consists of a single integer N.

## Constraints
> 1 ≤  N ≤ 10<sup>18</sup>

`None of the digits in N is 0.`
## Output
If it is impossible to make a multiple of 3, print -1; otherwise, print the minimum number of digits that must be erased to make such a number.
## Example
### Sample Input 1
> 35
### Sample Output 1
> 1

### Sample Input 2
> 369
### Sample Output 2
> 0

### Sample Input 3
> 6227384
### Sample Output 3
> 1

### Sample Input 4
> 11
### Sample Output 4
> -1
