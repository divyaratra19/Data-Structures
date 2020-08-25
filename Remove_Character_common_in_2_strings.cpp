#include <bits/stdc++.h>

using namespace std;
string removeChars(string s1, string s2)
{
    string newString="";
    map<char, int> m;
    for(long i=0;i<s2.length();i++)
        m[s2[i]]++;
    for(int i=0;i<s1.length(); i++)
    {
        if(!m.count(s1[i]))
        newString.append(1, s1[i]);
    }
    return newString;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s1, s2;
	    cin>>s1;
	    cin>>s2;
	    string s=removeChars(s1, s2);
	    cout<<s<<endl;
	}
	
	return 0;
}
