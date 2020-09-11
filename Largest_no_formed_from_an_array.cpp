#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool myComp(string s1, string s2)
{
    
    return s1+s2>s2+s1;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string str[n];
	    for(int i=0; i<n; i++)
	    cin>>str[i];
	    sort(str, str+n, myComp);
	    for(int i=0; i<n; i++)
	    cout<<str[i];
	    cout<<endl;
	}
	return 0;
}
