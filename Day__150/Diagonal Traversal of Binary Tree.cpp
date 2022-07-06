vector<int> diagonal(Node *root)
{
   queue<Node*> q;
   vector<int>ans;
   q.push(root);
   while(!q.empty())
   {
       Node *curr=q.front();
       q.pop();
       while(curr!=NULL)
       {
           if(curr->left!=NULL)
           {
               q.push(curr->left);
           }
           ans.push_back(curr->data);
           curr=curr->right;
       }
   }
   return ans;
}