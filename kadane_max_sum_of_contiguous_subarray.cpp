#include <iostream>
using namespace std;
int kadane(int arr[], int n)
{
    int sum, total;
    sum=0;
    total=arr[0];
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>total)
        total=sum;
        if(sum<0)
        sum=0;
    }
    return total;
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
	    int sum=kadane(arr, n);
	    cout<<sum<<endl;
	    
	}
	return 0;
}
