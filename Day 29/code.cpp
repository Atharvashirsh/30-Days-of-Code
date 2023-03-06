#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long ans,n1,n2,n3,n4;
    n1=a*c;
    n2=a*d;
    n3=b*c;
    n4=b*d;
    ans=max({n1,n2,n3,n4 });
    cout<<ans;
    return 0;
}
