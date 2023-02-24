# Alexa and Balls
Time Limit: 2 sec<br>
Memory Limit: 128000 kB
## Problem Statement
There is a container with A cyan balls. Alexa will do the following operation as many times as he likes (possibly zero times):<br>
Add B cyan balls and C red balls into the container.<br>
Alexa's objective is to reach a situation where the number of cyan balls in the container is at most D times the number of red balls in it.<br>

Determine whether the objective is achievable. If it is achievable, find the minimum number of operations needed to achieve it.
## Input
The input contains 4 space-separated numbers:
> A B C D

## Constraints
> 1 ≤ A, B, C, D ≤ 10<sup>5</sup>

All values in the input are integers.
## Output
If Alexa's objective is achievable, print the minimum number of operations needed to achieve it. Otherwise, print -1.
## Example
### Sample Input 1
> 5 2 3 2
### Sample Output 1
> 2

### Sample Input 2
> 6 9 2 3
### Sample Output 2
> -1
