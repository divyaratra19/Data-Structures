#include <iostream>
using namespace std;
void printPosition(int arr[], int n, int s)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            //cout<<sum<<" ";
            if(sum>s)
                break;
            else if(sum==s)
            {
                cout<<i+1<<" "<<j+1<<endl;
                return;
            }
            else
            continue;
        }
    }
    if(sum!=s)
    cout<<"-1"<<endl;
}
int main() {
	//code
	int t, n, s;
	cin>>t;
	while(t--)
	{
	    cin>>n>>s;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    printPosition(arr, n, s);
	}
	return 0;
}
