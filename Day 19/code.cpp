#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    long long a,b,c,d,ans = 0;
    cin>>a>>b>>c>>d;

    if(b >= c*d)
    {
        cout<<-1;
        return 0;
    }
    long long red = 0;
    while(a > red*d)
    {
        a += b;
        red += c;
        ans++;
    }
    cout<<ans;
    return 0;
}
