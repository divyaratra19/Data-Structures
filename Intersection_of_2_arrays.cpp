#include <bits/stdc++.h>
using namespace std;
void printUnion(int a1[], int a2[], int n, int m)
{
    map<int, int> mp;
    map<int, int>::iterator itr;
    sort(a2, a2+m);
    for(int i=0; i<n; i++ )
    {
        mp[a1[i]]++;
    }
        int count=0;
  
    for(int i=0; i<m; i++)
    {
        if(mp.find(a2[i])!= mp.end() && a2[i]!=a2[i+1])
        ++count;
        
    }
    
    cout<<count<<endl;
    
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n, m;
	    cin>>n>>m;
	    int a1[n], a2[m];
	    for(int i=0; i<n; i++)
	        cin>>a1[i];
	    for(int i=0; i<m; i++)
	        cin>>a2[i];
	    printUnion(a1, a2, n, m);
	}
	return 0;
}
