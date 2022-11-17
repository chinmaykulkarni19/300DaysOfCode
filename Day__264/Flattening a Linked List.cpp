Node* mergetwolist(Node* a,Node* b)
{
    Node* temp=new Node(0);
    Node* res=temp;
    while(a!=NULL && b!=NULL)
    {
        if(a->data<b->data)
        {
            temp->bottom=a;
            temp=temp->bottom;
            a=a->bottom;
        }
        else{
            temp->bottom=b;
            temp=temp->bottom;
            b=b->bottom;
        }
        
    }
    if(a) //if a remains
    {
        temp->bottom=a;
    }
    else
    {
        temp->bottom=b;
    }
    return res->bottom;
}
Node *flatten(Node *root)
{
   if(root==NULL || root->next==NULL)//if we reached to l4
   {
       return root;
   }
   //recur go to right
   root->next=flatten(root->next);
   //now mwerge
   root=mergetwolist(root,root->next);
   return root;
}