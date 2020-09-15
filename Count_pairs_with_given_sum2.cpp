#include <iostream>
#include<set>
using namespace std;
int countWays(int arr[], int n, int k)
{
    multiset<int> s;
    int countnum = 0;
    
    for(int i = 0; i < n; i++)
    {
        countnum += s.count(k-arr[i]);
        s.insert(arr[i]);
    }
    
    return countnum;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int k;
	    cin>>k;
	    int arr[n];
	    for(int i=0; i<n; i++)
    	    cin>>arr[i];
    	    
    	cout<<countWays(arr, n, k)<<endl;
	}
	return 0;
}
