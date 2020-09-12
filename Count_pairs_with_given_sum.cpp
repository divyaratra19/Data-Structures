#include<bits/stdc++.h>
using namespace std;

int countPairs(int *arr, int n, int k)
{
    unordered_map<int, int> m; //Element and its frequency
    //Search for the pair
    int cnt =0;
    for(int i=0;i<n;i++){
        int s = k - arr[i];
        if(m.find(s)!=m.end()){
            cnt+=m[s];
            m[arr[i]]++;
        }
        else{
            m[arr[i]]++;
        }
    }
    return cnt;
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
	int n;
	cin >> n;
	int k;
	cin >> k;
	int *arr = new int[n];
	for(int i=0;i<n;i++) cin >> arr[i];
    cout << countPairs(arr,n,k) << endl;
    }
	return 0;
}
