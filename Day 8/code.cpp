#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string s,t;
    cin>>s>>t;      // 'S' is a string ==> 'T' is a contiguous substring of S
    int counter = 0;

    int len_s = s.length();
    int len_t = t.length();

    //cout<<len_s<<" "<<len_t<<endl;
    
    for(int i=0; i<len_s; i++)  
    {                           
        if(s[i]==t[0])          
        {
            for(int j=i,k=0; k<len_t; j++,k++)    // k=0--(3)
            {
                if(t[k]==s[j])
                {
                    counter++;
                }
            }
            break;
        }
    }

    //cout<<counter<<endl;

    if(counter == len_t) cout<<"Yes";
    else cout<<"No";

    return 0;
}
