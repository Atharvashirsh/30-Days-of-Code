#include <bits/stdc++.h> // header file includes every Standard library
#include <bits/stdc++.h> // header file includes every Standard library
#define ll  long long
using namespace std;

int main() {
	// Your code here
    ll  a,b,x;
    ll  counter=0;
    cin>>a>>b>>x;
    while(a<b )
    {
        a*=x;
        counter++;
    }

    cout<<counter;
    return 0;
}
