class Solution {
  public:
    // Return the Kth smallest element in the given BST
    int ans=-1;
    void inorder(Node *root,int &K)
    {
        if(root==NULL)
        return;
        inorder(root->left,K);
        K--;
        if(K==0)
        {
            ans=root->data;
        }
        inorder(root->right,K);
    }
    int KthSmallestElement(Node *root, int K) {
        inorder(root,K);
        return ans;
    }
};