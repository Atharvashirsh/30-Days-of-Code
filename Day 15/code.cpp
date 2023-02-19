#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string s;
    int index = -1;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a')
        {
            index=i+1;
        }
    }
    cout<<index;
    return 0;
}
