bool solve(Node* p,Node* q)
{
    if(p==NULL && q==NULL)
    return true;
    if((p==NULL && q!=NULL)||(p!=NULL && q==NULL))
    return false;
    return solve(p->left,q->right)&&solve(p->right,q->left);
}
bool IsFoldable(Node* root)
{
    if(root==NULL)
    return true;
    return solve(root->left,root->right);
}