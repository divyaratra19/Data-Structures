#include <iostream>
using namespace std;
void printFreq(int arr[], int n)
{
 int hash[n]={0}; 

	// Traverse all array elements 
	int i = 0; 
	while (i<n) 
	{ 
		//update the frequency of array[i] 
		hash[arr[i]-1]++; 
		
		//increase the index 
		i++; 
	} 
 
	for (int i=0; i<n; i++) 
		cout<<hash[i]<<" "; 
    cout<<endl;
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
	    for(int i=0; i<n ;i++)
	    cin>>arr[i];
	    printFreq(arr, n);
	}
	return 0;
}
