#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int l,r;
    string s,revstr;
    cin>>l>>r>>s;
    
    
    for(int i=0;i<l-1;i++)
    {
        revstr+=s[i];
    }
    for(int i=r-1;i>=l-1;i--)
    {
        revstr+=s[i];
    }
    for(int i=r;i<s.length();i++)
    {
        revstr+=s[i];
    }
    cout<<revstr;
    return 0;
}
