#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long maxRectangles(int n)
{
    if(n==0)
    return 0;
    return pow(n, 3)-pow(n, 2)+maxRectangles(n-1);
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	cout<<maxRectangles(n)<<endl;}
	return 0;
}
