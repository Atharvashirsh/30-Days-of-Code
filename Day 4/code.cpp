#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,m,count=0;
    cin>>n>>m;

    for(int i=n+1;i<m && count<5;i++)
    {
        if(i%2==0)
        {
            cout<<i<<" ";
            count++;
        } 
        
    }
    
    return 0;
}
