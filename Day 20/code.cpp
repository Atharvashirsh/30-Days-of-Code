#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    
    //  Taking Input    ---->
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //          <-------

    int nut_count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=10) continue;
        else nut_count+=(arr[i]-10);
    }
    cout<<nut_count;
    return 0;
}
