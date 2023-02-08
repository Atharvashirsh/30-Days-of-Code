# Friends Or Not?!
Time Limit: 2 sec <br>
Memory Limit: 128000 kB
## Problem Statement
The students of Newton School threw a grand party to celebrate their hard work and achievements. They danced and sang the night away, enjoying delicious food and creating memories that would last a lifetime.
There are N guests in the party and N-1 relationships are given. The guests are numbered 1, 2,. , N. The i- th relationship depicts that guest ai and guest bi are friends.
Determine whether a guest exists or not who is a friend of all other guests.
Here, we only consider the direct friendship.

## Input
Input is given from Standard Input in the following format:

> N <br>
> a1 b1 <br>
> a2 b2 <br>
> a3 b3<br>
> .<br>
> .<br>
> .<br>
> .<br>
> a<sub>n-1</sub> b<sub>n-1</sub> 


## Constraints
> 3 ≤ N ≤ 10^5 <br>
> 1 ≤ ai, bi ≤ N <br>
> i≤N
## Output
If a guest exists or who is a friend of all other guests, print "Yes" else print "No".
## Example
### Sample Input 1
> 5<br>
> 1 4<br>
> 2 4<br>
> 3 4<br>
> 4 5

### Sample Output 1
> Yes

### Sample Input 2
> 4
> 2 4
> 1 4
> 2 3

### Sample Output 2
> No

### Sample Input 3
> 10<br>
> 3 10<br>
> 4 10<br>
> 9 10<br>
> 1 10<br>
> 7 10<br>
> 5 10<br>
> 2 10<br>
> 8 10<br>
> 6 10

### Sample Output 3
> Yes <br>

<h6>In first case, 4 is a friend of everyone else's, while in third case 10 is a friend to all, while there is no such number in the second case.</h6>
<hr>
