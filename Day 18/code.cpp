#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string a,b;
    cin>>a>>b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    for(int i = 0; i <= min(a.length(),b.length()) - 1; i++)
    {
        if( ( ( (a[i]) - '0' ) + ( (b[i]) - '0' ) ) >=10 )
        {
            cout<<"Hard";
            return 0;
        }
    }
    cout<<"Easy";
    return 0;
}
