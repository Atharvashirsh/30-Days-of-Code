#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string s,t;
    bool flag;
    cin>>s>>t;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==t[i])
        {
            flag = true;
        }
        else{
            flag=false;
            break;
        }
    }

    if(flag) cout<<"Yes";
    else cout<<"No";
    return 0;
}
