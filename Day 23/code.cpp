#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin>>n;
    int arr[4*n-1];
    int sum_arr = 0;
    int sum_n = 0;
    for(int i=0;i<4*n-1;i++)
    {
        cin>>arr[i];
        sum_arr += arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        sum_n += i;
    }
    cout<<(sum_n*4)-sum_arr;
    return 0;
}
