#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,k;
    cin>>n>>k;

    if(k%2==0)
    {
        long long int x = n/k;
        long long int y = (n + k/2)/k;
        cout<<(x*x*x + y*y*y);
    }
    else
    {
        long long int x = n/k;
        cout<<(x*x*x);
    }

    return 0;
}
