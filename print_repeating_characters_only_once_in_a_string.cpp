/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string ans;
    int mp[500]={0};
    for(int i=0; i<s.length(); i++)
    {
        
        mp[s[i]]++;
        if(mp[int(s[i])]==1)
        ans+=s[i];
    }
    cout<<ans;

    return 0;
}
