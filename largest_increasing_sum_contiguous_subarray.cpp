#include <iostream>
using namespace std;
int lics(int arr[], int n)
{
    int max_end_here=arr[0];
    int max_so_far=arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]<arr[i-1])
            max_end_here=arr[i];
        if(arr[i]>arr[i-1])
            max_end_here+=arr[i];
        if(max_so_far<max_end_here)
            max_so_far=max_end_here;
        
    }
    return max_so_far;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for( int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        cout<<lics(arr, n)<<endl;
    }
	//code
	return 0;
}
