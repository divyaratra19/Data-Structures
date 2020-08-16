
// Search an element in sorted and rotated 
// array using single pass of Binary Search 
#include <bits/stdc++.h> 
using namespace std; 
  
// Returns index of key in arr[l..h] if 
// key is present, otherwise returns -1 
int search(int arr[], int l, int h, int key) 
{ 
    if (l > h) 
        return -1; 
  
    int mid = (l + h) / 2; 
    if (arr[mid] == key) 
        return mid; 
  
    /* If arr[l...mid] is sorted */
    if (arr[l] <= arr[mid]) { 
        if (key >= arr[l] && key <= arr[mid]) 
            return search(arr, l, mid - 1, key); 
        return search(arr, mid + 1, h, key); 
    } 
  
    /* If arr[l..mid] first subarray is not sorted, then arr[mid... h] 
    must be sorted subarray */
    if (key >= arr[mid] && key <= arr[h]) 
        return search(arr, mid + 1, h, key); 
  
    return search(arr, l, mid - 1, key); 
} 
  
// Driver program 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int l=0;l<n;l++)
            cin>>arr[l];
        int key;
        cin>>key;
        int i = search(arr, 0, n - 1, key); 
        cout << i << endl; 
    
    }
}
