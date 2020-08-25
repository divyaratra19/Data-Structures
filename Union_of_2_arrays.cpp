#include <bits/stdc++.h>
using namespace std;
void printUnion(int a1[], int a2[], int n, int m)
{
    map<int, int> mp;
    map<int, int>::iterator itr;
    int arr[n+m];
    for(int i=0; i<n; i++ )
    {
        arr[i]=a1[i];
    }
    for(int i=0; i<m; i++ )
    {
        arr[i+n]=a2[i];
    }
    for(int i=0; i<n+m; i++)
    {
        mp[arr[i]]++;
    }
    itr=mp.begin();
    int count=0;
    while(itr!=mp.end())
    {
        ++count;
        ++itr;
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
