#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin>>n;
    int a[n-1], b[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i]>>b[i];
    }
    int flag=0;
  
    for(int i=0;i<n-2;i++)
    {
        if(!(a[i]==a[i+1] || a[i]==b[i+1] || b[i]==b[i+1] || b[i]==a[i+1]))
        {
            flag=1;
            break;
        }
    }
    if(flag) cout<<"No";
    else cout<<"Yes";

    return 0;
}
