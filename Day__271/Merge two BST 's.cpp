void helper(Node* root,vector<int>& res)
    {
        if(root==NULL)
        {
            return;
        }
        helper(root->left,res);
        res.push_back(root->data);
        helper(root->right,res);
    }
    vector<int> merge(Node *root1, Node *root2)
    {
       vector<int>res1,res2;
       helper(root1,res1);
       helper(root2,res2);
       int i=0;
       int j=0;
       vector<int>ans;
       while(i<res1.size() && j<res2.size())
       {
           if(res1[i]<res2[j])
           {
               ans.push_back(res1[i]);
               i++;
           }
           else if(res1[i]>res2[j])
           {
               ans.push_back(res2[j]);
               j++;
           }
           else if(res1[i]==res2[j])
           {
               ans.push_back(res1[i]);
               i++;
           }
       }
       while(i<res1.size())
       {
           ans.push_back(res1[i]);
           i++;
       }
       while(j<res2.size())
       {
           ans.push_back(res2[j]);
           j++;
       }
       return ans;
    }