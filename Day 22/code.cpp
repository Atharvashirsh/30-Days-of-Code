#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    string s,newstr;
    cin>>n>>s;

    for(int i=0;i<s.length();i++)
    {
        char ch;
        ch = (((s[i] - 65) + n) % 26) + 65;
        cout<<ch;
    }
    return 0;
}
