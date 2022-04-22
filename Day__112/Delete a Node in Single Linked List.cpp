Node* deleteNode(Node *head,int x)
{
    Node *curr=head;
    Node *prev=NULL;
    if(x==1)
    {
        head=head->next;
        delete curr;
    }
    else
    {
        for(int i=0;i<x-1;i++)
        {
            prev=curr;
            curr=curr->next;
            
        }
        if(curr)
            {
                prev->next=curr->next;
                delete curr;
            }
        
    }
    return head;
}