vector<int> leftView(Node *root)
{
    vector<int>ans;
    if(root==NULL)
    return ans;
   queue<Node *>res;
   res.push(root);
   while(res.empty()==false)
   {
       int t=res.size();
       for(int i=0;i<t;i++)
       {
           Node *curr=res.front();
           res.pop();
           if(i==0)
           {
               ans.push_back(curr->data);
           }
           if(curr->left!=NULL)
           {
               res.push(curr->left);
           }
           if(curr->right!=NULL)
           {
               res.push(curr->right);
           }
       }
   }
   return ans;
}