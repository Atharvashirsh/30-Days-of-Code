#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int s,t;
    cin>>s>>t;

    for(int x=0;x<=s;x++)
    {
        for(int y=0;y<=s-x;y++)
        {
            for(int z=0;z<=s-x-y;z++)
    {
        if((x+y+z)<=s && x*y*z<=t)
        {
            cnt+=1;
        }
    }
        }
    }

    cout<<cnt;

    return 0;
}
