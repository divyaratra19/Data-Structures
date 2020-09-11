#include <iostream>
using namespace std;
void addOnes(int sol[], int j, int n)
{
    for(int i=1; i<=n; i++)
    {
        if(i>=j)
        sol[i]++;
    }
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k, val;
	    cin>>n>>k;
	    int sol[n];
	    for(int i=1; i<=n; i++)
	    sol[i]=0;
	    while(k--)
	    {
	        cin>>val;
	        addOnes(sol,val,n);
	    }
	    for(int i=1; i<=n; i++)
	    cout<<sol[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
