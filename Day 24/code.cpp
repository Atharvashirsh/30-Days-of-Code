#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int arr[26];
    for(int i=0;i<26;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<26;i++)
    {
        cout<<char(arr[i]+96);
    }
    return 0;
}
