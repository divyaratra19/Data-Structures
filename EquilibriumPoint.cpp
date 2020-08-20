#include <iostream>
using namespace std;
int equil(int arr[], int n)
{
    int front=0, back=0;
    if(n==1)
    return 1;
    
    for(int i=0;i<n; i++)
    {
        back+=arr[i];
    }
    for(int i=0;i<n; i++)
    {
        back-=arr[i];
        if(back==front)
        return i+1;
        front+=arr[i];
    }
    /*for(int i=0;i<n; i++)
    {
        front+=arr[i];
        back=0;
        int j;
        for(j=n-1;j>i+1;j--)
        {
            back+=arr[j];
        }
        if(front==back)
            return j+1;
    }*/
    return -1;
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
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    int e=equil(arr, n);
	    cout<<e<<endl;
	}
	return 0;
}
