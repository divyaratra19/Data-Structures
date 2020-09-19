// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
	
	string printString(string &S, char ch, int count)
	{
	    // Your code goes here
	    int cnt=0;
	    string s="";
	    int i=0;
	    for(i=0; i<S.length(); i++)
	    {
	        if(cnt==count)
	        break;
	        if(S[i]==ch){
	        cnt++;
	        }
	        
	    }
	    for(int j=i; j<S.length(); j++)
	    {
    	        s+=S[j];
	    }
	    //if((i==S.length() && cnt==count))
	    //return "";
	    if(s=="")
	    cout<<"Empty string";
	    return s;
	}
};

// { Driver Code Starts.

int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		char ch;
   		int count;

   		cin >> s >> ch >> count;
   		Solution ob;
   		cout << ob.printString(s, ch, count) << "\n";
   		
   	}

    return 0;
}  // } Driver Code Ends
