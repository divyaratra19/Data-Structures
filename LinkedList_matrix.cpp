// { Driver Code Starts
#include <bits/stdc++.h>
#define MAX 20
using namespace std;

struct Node
{
	int data;
	Node* right, *down;
	
	Node(int x){
	    data = x;
	    right = NULL;
	    down = NULL;
	}
};

void display(Node* head)
{
    Node* Rp;
	Node* Dp = head;
	while (Dp) {
		Rp = Dp;
		while (Rp) {
			cout << Rp->data << " ";
			Rp = Rp->right;
		}
		
		Dp = Dp->down;
	}
}

Node* constructLinkedMatrix(int mat[MAX][MAX], int n);

// driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mat[MAX][MAX];
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin>>mat[i][j];
        Node* head = constructLinkedMatrix(mat, n);
        if(!head)cout<<"-1";
	    else display(head);
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends


/*structure of the node of the linked list is as

struct Node
{
	int data;
	Node* right, *down;
	
	Node(int x){
	    data = x;
	    right = NULL;
	    down = NULL;
	}
};
*/
// n is the size of the matrix
// function must return the pointer to the first element 
// of the in linked list i.e. that should be the element at arr[0][0]
Node* createNode(int arr[MAX][MAX], int n, int i, int j, Node* head){
    if(i<0 || i>n || j<0 || j>n)
        return NULL;
    head=(Node*)malloc(sizeof(Node*));
    head->data=arr[i][j];
    if(i+1<n)
    {
        head->down=createNode(arr, n, i+1, j, head->down);
    }
    if(j+1<n)
        head->right=createNode(arr, n, i, j+1, head->right);
    return head;
    
}
Node* constructLinkedMatrix(int mat[MAX][MAX], int n)
{
    // code here
    struct Node* head=NULL;
    head=createNode(mat,n, 0, 0, head);
}
