#include <iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;
bool myCmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if(a.second==b.second)
    return a.first<b.first;
    return a.second>b.second;
    
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    vector<pair<int, int>> v;
	    map<int, int> m;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
	    sort(arr, arr+n, greater<int>());
	    //frequency in map
	    for(int i=0;i<n; i++)
	    m[arr[i]]++;
	    
	    //map to vector
	    for(auto i=m.begin(); i!=m.end(); i++)
	    v.push_back(make_pair(i->first, i->second));
	    
	    sort(v.begin(), v.end(), myCmp);
	    
	    for(auto i=v.begin(); i!=v.end(); i++)
	    {
	        while(i->second--)
	        cout<<i->first<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
