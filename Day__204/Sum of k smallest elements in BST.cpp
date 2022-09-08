void inorder(Node* root,int &k,int &sum)
{
    if(root==NULL)
    return;
    inorder(root->left,k,sum);
    if(k==0)
    return;
    sum+=root->data;
    k--;
    inorder(root->right,k,sum);
    
}
int sum(Node* root, int k) 
{ 
    int sum=0;
    inorder(root,k,sum);
    return sum;
    
}