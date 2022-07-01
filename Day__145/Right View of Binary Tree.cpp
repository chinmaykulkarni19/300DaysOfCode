class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       queue<Node *>res;
       vector<int>ans;
       res.push(root);
       while(res.empty()==false)
       {
           int t=res.size();
           for(int i=0;i<t;i++)
           {
               Node *curr=res.front();
               res.pop();
               if(i==t-1)
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
};