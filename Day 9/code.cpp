#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int x,y,z;
    cin>>x>>y>>z;

    if(y<0)
    {
        x=-x;
        y=-y;
        z=-z;
    }

    if(x<y)
    {
        cout<<abs(x);
    }
    else
    {
        if(z>y)
        {
            cout<<"-1";
        }
        else
        {
            cout<<abs(z)+abs(x-z);
        }
    }
    return 0;
}
