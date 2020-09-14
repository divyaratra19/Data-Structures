#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int countDecoding(string digits, long long n) 
{ 
    if (digits[0]=='0') 
          return 0; 
    if (n==0 || n == 1 ) 
        return 1;
    int count = 0;  // Initialize count 
    if (digits[n-1] > '0') 
        count =  countDecoding(digits, n-1); 
    if (digits[n-2] == '1' ||  
                  (digits[n-2] == '2' && digits[n-1] < '7') ) 
        count +=  countDecoding(digits, n-2); 
    return count; 
} 
int main() {
	//code
	//cin.tie(NULL);
	//ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    string s;
	    cin>>s;
        cout<<countDecoding(s, n)<<endl;
        
	}
	return 0;
}
