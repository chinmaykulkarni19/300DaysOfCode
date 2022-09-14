class Solution{
public:    
    bool isCompleteBT(Node* root){
        queue<Node*>q;
        q.push(root);
        bool flag=false;
        while(!q.empty())
        {
            Node* curr=q.front();
            q.pop();
            if(curr==NULL)
            {
                flag=true;
            }
            else
            {
                if(flag==true)
                {
                    return false;
                }
                q.push(curr->left);
            q.push(curr->right);
            }
            
        }
        return true;
    }
};