#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    long long n,k;
    cin>>n>>k;

    for(int i=0; i<k; i++)
    {
        if(n%200 == 0)
        {
            n/=200;
        }
        else
        {
            n *= 1000;
            n += 200;
        }
    }
    cout<<n;

    return 0;
}
