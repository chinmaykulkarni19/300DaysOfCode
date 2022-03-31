Node *removeDuplicates(Node *head)
{Node *curr=head;
    while(curr->next!=NULL && curr!=NULL)
    {
        if(curr->data==curr->next->data)
        {
            Node *temp=curr->next;
            curr->next=curr->next->next;
            delete(temp);
        }
        else
        curr=curr->next;
    }
    return head;
}