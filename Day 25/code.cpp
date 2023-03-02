#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int divisible(string num)
{
    int n = num.length();
 
    // add up all the digits of num
    int sum = accumulate(begin(num),
                         end(num), 0) - '0' * 1;
 
    // if num is already is divisible by 3
    // then no digits are to be removed
    if (sum % 3 == 0)
        return 0;
 
    // if there is single digit, then it is
    // not possible to remove one digit.
    if (n == 1)
        return -1;
 
    // traverse through the number and find out
    // if any number on removal makes the sum
    // divisible by 3
    for (int i = 0; i < n; i++)
        if (sum % 3 == (num[i] - '0') % 3)
            return 1;
 
    // if there are two numbers then it is
    // not possible to remove two digits.
    if (n == 2)
        return -1;
 
    // Otherwise we can always make a number
    // multiple of 2 by removing 2 digits.
    return 2;
}
 
int main()
{
    string num;
    cin>>num;
    cout << divisible(num);
    return 0;
}
