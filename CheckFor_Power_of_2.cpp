#include <iostream>
using namespace std;
bool check(long b)
{
    return b && (!(b & (b-1)));
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    bool b;
	    long n;
	    cin>>n;
	    b=check(n);
	    if(b)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
	
}
