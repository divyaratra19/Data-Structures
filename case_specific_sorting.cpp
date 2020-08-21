// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


string caseSort(string str, int n){
    
    // your code here
    vector<char> s1, s2;
    for(int i=0;i<n;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        s1.push_back(str[i]);
        if(str[i]>='A' && str[i]<='Z')
        s2.push_back(str[i]);
    }
    sort(s1.begin(), s1.end()); 
    sort(s2.begin(), s2.end()); 
    int i=0,j=0;
    for(int k=0;k<n;k++)
    {
        if (str[k] >= 'a' && str[k] <= 'z') { 
            str[k] = s1[i]; 
            ++i; 
        } 
          else if (str[k] >= 'A' && str[k] <= 'Z') { 
            str[k] = s2[j]; 
            ++j; 
        } 
    }
    return str;
}

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		
		cout<<caseSort (str, n)<<endl;
	}
}  // } Driver Code Ends
