#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

bool matchstr(string &s,string &t)
{
    bool flag = true;
    for(int i=0;i<s.length();)
    {
        if(s[i]!=t[i] && flag==true)
        {
            if(i==s.length()-1) return false;
            else if(s[i]==t[i+1] && s[i+1] == t[i])
            {
                flag = false;
                i+=2;
            }
            else return false;
        }
        else if(s[i]!=t[i] && flag==false)
        {
            return false;
        }
        else i++;
    }
    return true;
}
int main() {
	// Your code here
    string s,t;
    cin>>s>>t;

    if(matchstr(s,t)) cout<<"Yes";
    else cout<<"No";

    return 0;
}
