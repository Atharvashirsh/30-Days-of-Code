#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

bool numinarr(int j,int srr[], int n  ){
    for(int i=0;i<n;i++)
    {
        if(j==srr[i]){
            return true;
        }
    }
    return false;
}
int main() {
	// Your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(numinarr(i,arr ,n  ))
        {
            continue;
        }
        else{
            cout<<i;
            return 0;
        }
    }
    return 0;
}
