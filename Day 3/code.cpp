#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    int countodd = 0,counteven = 0;
    cin>>n;
    for(int i=1;i<n+1;i++)
    {   
        if(i%2==0) counteven++;
        else countodd++;
    }
    cout<<countodd*counteven;
    return 0;
}
