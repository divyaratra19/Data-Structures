#include <iostream>
#include <bits/stdc++.h> 

using namespace std;
int maxSquares(int n)
{
    if(n<1)
    return 0;
    else
    return pow(n,2)+maxSquares(n-1);
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<maxSquares(n)<<endl;
	}
	return 0;
}
