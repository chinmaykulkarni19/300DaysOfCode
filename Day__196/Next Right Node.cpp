class Solution
{
public:
    Node *nextRight(Node *root, int key)
    {
        if(root==NULL){
            return new Node(-1);
        }
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            Node* temp=NULL;
            bool flag=false;
            for(int i=0;i<size;i++){
                Node* r=q.front();
                q.pop();
                
                if(r->data==key){
                    flag=true;
                    temp=r;
                }
                if(flag && temp!=r){
                    return r;
                }
                
                if(r->left){
                    q.push(r->left);
                }
                if(r->right){
                    q.push(r->right);
                }
            }
        }
        return new Node(-1);
    }
};