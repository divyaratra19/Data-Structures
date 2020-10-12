// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/*You are required to complete this function */

int remove_duplicate(int [],int );

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }

    int n = remove_duplicate(a,sizeof(a)/sizeof(a[0]));

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends


/*You are required to complete this function */
int remove_duplicate(int A[],int N)
{
//Your code here
    int temp[N];
    int j=0;
    if(N==0 || N==1)
    return N;
    for(int i=0; i<N-1; i++)
    {
        if(A[i]!=A[i+1])
        {
            temp[j++]=A[i];
        }
    }
    temp[j++]=A[N-1];
    for(int i=0; i<j; i++)
    {
        A[i]=temp[i];
    }
    return j;
}
