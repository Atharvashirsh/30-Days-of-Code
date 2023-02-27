# Cards Shuffle
Time Limit: 2 sec <br>
Memory Limit: 128000 kB
## Problem Statement
We have 4 cards with an integer 1 written on it, 4 cards with 2, …, 4 cards with N, for a total of 4N cards.
Alexa shuffled these cards, removed one of them, and gave you a pile of the remaining 4N−1 cards. The i- th card (1≤i≤4N−1) of the pile has an integer Ai written on it.

Find the integer written on the card removed by Alexa.
## Input
The first line of input contains an integer N.
The second line contains N space separated integers as follows:

> N <br>
> A<sub>1</sub>, A<sub>2</sub>, ... A<sub>N</sub>

## Constraints
> 1 ≤ N ≤ 10<sup>5</sup> <br>
> 1 ≤ A<sub>i</sub> ≤ N <br>
> 1 ≤ i ≤ 4N−1 <br>

`For each k (1 ≤ k ≤ N), there are at most 4 indices i such that Ai=k.`<br>
`All values in input are integers.`
## Output
Print the answer.
## Example
### Sample Input 1
> 3<br>
> 1 3 2 3 3 2 2 1 1 1 2
### Sample Output 1
> 3

### Sample Input 2
> 1<br>
> 1 1 1
### Sample Output 2
> 1

### Sample Input 3
> 4<br>
> 3 2 1 1 2 4 4 4 4 3 1 3 2 1 3
### Sample Output 3
> 2
