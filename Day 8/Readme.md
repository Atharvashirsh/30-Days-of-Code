# Contiguous Substring
Time Limit: 2 sec <br>
Memory Limit: 128000 kB
## Problem Statement
You are given strings S and T consisting of lowercase English letters. Determine whether T is a (contiguous) substring of S.
<br>
A string Y is said to be a (contiguous) substring of X if and only if Y can be obtained by performing the operation below on X zero or more times.
<br>
Do one of the following.
1. Delete the first character in X.
2. Delete the last character in X. <br><br>
For instance, the tag is a (contiguous) substring of voltage, while ace is not a (contiguous) substring of atcoder.
## Input
The input is given from Standard Input in the following format:
> S<br>
> T

## Constraints
S and T consist of lowercase English letters.<br>
> 1 ≤ ∣S∣ <br>
> ∣T∣ ≤ 100 <br>
`(∣X∣ denotes the length of a string X. )`
## Output
If T is a (contiguous) substring of S, print Yes; otherwise, print No.
## Example
### Sample Input 1
> voltage<br>
> tag
### Sample Output 1
> Yes

### Sample Input 2
> gorilla<br>
> gorillagorillagorilla
### Sample Output 2
> No
