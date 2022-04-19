Node* reverseDLL(Node * head)
{
    if(head==NULL || head->next==NULL)
    return head;
    Node *curr=head;
    Node *t=NULL;
    while(curr!=NULL)
    {
        t=curr->prev;
        curr->prev=curr->next;
        curr->next=t;
        curr=curr->prev;
    }
    return t->prev;
}