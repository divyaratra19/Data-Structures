#include <bits/stdc++.h>
using namespace std;
void printSum(int arr[], int n)
{
    
    map<int, int> m;
    map<int, int>:: iterator itr;
    for(int i=0; i<n ;i++)
    {
        m[arr[i]]++;
    }
    int sum=0;
    for (auto i : m) 
        sum+=i.first;  
             
    cout<<sum<<endl;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    
	    printSum(arr, n);
	}
	return 0;
}
