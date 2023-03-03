#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    long long a,b,c,k;
    long long sum = 0;
    cin>>a>>b>>c>>k;

    if(k<a)
    {
        sum += k;
        k=0;
    }
    if(k>=a)
    {
        sum += a;
        k -= a;
    }
    if(k>=b)
    {
        k -= b;
    }
    if(k!=0)
    {
        sum -= k;
        k=0;
    }
    cout<<sum;



    return 0;
}
