#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,k;
    cin>>n>>k;
    int counter = 0;

    while(n)
    {
        counter++;
        n/=k;
    }
    cout<<counter;
    return 0;
}
