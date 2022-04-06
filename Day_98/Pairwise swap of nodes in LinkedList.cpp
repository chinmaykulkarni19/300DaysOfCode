struct Node* pairwise_swap(struct Node* head)
{
    Node *prev=head;
    Node *curr=head->next->next;
    head=head->next;
    head->next=prev;
    while(curr!=NULL && curr->next!=NULL)
    {
        prev->next=curr->next;
        prev=curr;
        Node *next=curr->next->next;
        curr->next->next=curr;
        curr=next;
    }
    prev->next=curr;
    return head;
}