#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string column(int n)
{
    string s="";
    char ch;
    while(n>0)
    {
        int r=n%26;
        if(r!=0)
        {
            ch='A'+r-1;
            s+=ch;
            n=n/26;
        }
        else
        {
            ch='Z';
            s+=ch;
            n=(n/26)-1;
        }
    }
    reverse(s.begin(), s.end());
    return s;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<column(n)<<endl;
	}
	return 0;
}
