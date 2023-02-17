#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

string stinger(long val)
{
    string ans;
    while(val>0)
    {
        int num =(int) (val % 2);
        if(num==1) ans.append("2");
        else ans.append("0");
        val/=2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main() {
	// Your code here
    long n;
    cin>>n;
    string ans = stinger(n);
    cout<<ans;
    return 0;
}
