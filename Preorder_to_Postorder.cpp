#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *left, *right;
     Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
} * root;
void insertinBST(int data)
{
    Node* newNode=new Node(data);
    if(root==NULL){
        root=newNode;
        return;
    }
    else {
        Node* temp = root;
        while (1) {
            if (temp->data > data) 
            {
                if (temp->left == NULL) {
                    temp->left = newNode;
                    break;
                }
                else
                    temp = temp->left;
            }
            else {
                if(temp->right==NULL)
                {
                    temp->right=newNode;
                    break;
                }
                else
                {
                    temp=temp->right;
                }
            }
        }
    }
}
void printPostOrder(Node* root)
{
    if(root==NULL)
    return;
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout<<root->data<<" ";
    return;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    long long arr[n];
	    for(long long i=0;i<n;i++)
	        cin>>arr[i];
	    for(long long i=0;i<n;i++)
	        insertinBST(arr[i]);    
	    printPostOrder(root);
	    cout<<endl;
	    root=NULL;
	}
	return 0;
}
