#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

bool check_decimal(int num)
{
    string n = to_string(num);
    for(int i=0;i<n.length();i++)
    {
        if(n[i]=='7')
        {
            return false;
        }
    }
    return true;
}

bool check_octal(int n)
{
    int octalval[100];
    
    int i=0;
    while(n!=0)
    {
        if((n % 8) == 7){
          return false;  
        } 

        octalval[i++] = n % 8;
        n = n / 8;
    }
    return true;
}
int main() {
	// Your code here
    int number;
    int counter = 0;
    cin>>number;

    for(int i=1;i<number+1;i++)
    {
        if(!(check_decimal(i))) continue;
        else if(!(check_octal(i))) continue;
        else counter++;
    }

    cout<<counter;
    return 0;
}
