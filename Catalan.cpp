#include <iostream>
#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision; 
using namespace std;
 int256_t catalanDP(unsigned int n) 
{ 
	 int256_t catalan[n+1]; 
	catalan[0] = catalan[1] = 1; 
	for (int i=2; i<=n; i++) 
	{ 
		catalan[i] = 0; 
		for (int j=0; j<i; j++) 
			catalan[i] += catalan[j] * catalan[i-j-1]; 
	} 
	return catalan[n]; 
} 

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    unsigned int n;
	    cin>>n;
	    cout<<catalanDP(n)<<endl;
	}
	return 0;
}
