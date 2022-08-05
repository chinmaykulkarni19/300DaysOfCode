class Solution{
public:
    //Function that constructs BST from its preorder traversal.
    Node* helper(int arr[],int l,int h)
    {
        if(l>h)
        {
            return NULL;
        }
        Node* root=newNode(arr[l]);
        int i=l+1;
        while(arr[i]<arr[l] && i<=h)
        {
            i++;
        }
        root->left=helper(arr,l+1,i-1);
        root->right=helper(arr,i,h);
        return root;
        
    }
    Node* post_order(int pre[], int size)
    {
        if(size==0)
        {
            return NULL;
        }
        return helper(pre,0,size-1);
    }
};