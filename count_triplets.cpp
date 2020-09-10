#include <iostream>
#include<bits//stdc++.h>
using namespace std;

int countWays(int arr[], int n)  
{  
        int cnt =0;
        sort(arr, arr + n);
        
        for (int i = n - 1; i >= 0; i--) 
        {
            int j = 0;
            int k = i - 1;
            
            while (j < k) 
            {
                if (arr[i] == arr[j] + arr[k]) 
                {
                    j++;
                    k++;
                    cnt++;
                }
                else if (arr[i] > arr[j] + arr[k])
                j ++;
                else
                k --;
            }
        }
        if(cnt==0)
        return -1;
        return cnt;  
    }  
  
    // Driver code  
    int main() 
    {  	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n; i++)
	    cin>>arr[i];
	    cout<<countWays(arr, n)<<endl;
	}
	return 0;
}
