# Shifted String
Time Limit: 2 sec<br>
Memory Limit: 128000 kB
## Problem Statement
We have a string S consisting of uppercase English letters. Additionally, an integer N will be given.<br>
Shift each character of S by N in alphabetical order (see below), and print the resulting string.<br>

We assume that A follows Z. For example, shifting A by 2 results in C (A → B → C), and shifting Y by 3 results in B (Y → Z → A → B).
## Input
The input contains a number and a string separated by a new line.

> N<br>
> S
## Output
Print the string resulting from shifting each character of S by N in alphabetical order
## Example
### Sample Input 1
> 2<br>
> ABCXYZ<br>
### Sample Output 1
> CDEZAB

### Sample Input 2
> 0<br>
> ABCXYZ<br>
### Sample Output 2
> ABCXYZ

### Sample Input 3
> 13<br>
> ABCDEFGHIJKLMNOPQRSTUVWXYZ
### Sample Output 3
> NOPQRSTUVWXYZABCDEFGHIJKLM
