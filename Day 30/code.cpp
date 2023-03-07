#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin>>n;
    for(int i=1;i<10;i++)
    {
        for(int j=1;j<10;j++)
        {
            if(i*j==n)
            {
                cout<<"Yes";
                return 0;
            }
        }
    }
    cout<<"No";
    return 0;
}
