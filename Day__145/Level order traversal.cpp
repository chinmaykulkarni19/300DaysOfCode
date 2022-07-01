class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
       queue<Node *>q;
       vector<int>res;
       q.push(node);
       while(q.empty()==false)
       {
           int t=q.size();
           for(int i=0;i<t;i++)
           {
               Node *curr=q.front();
               q.pop();
               res.push_back(curr->data);
               if(curr->left!=NULL)
               {
                   q.push(curr->left);
               }
               if(curr->right!=NULL)
               {
                   q.push(curr->right);
               }
           }
       }
       return res;
    }
};