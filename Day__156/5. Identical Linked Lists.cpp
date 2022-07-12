bool areIdentical(struct Node *head1, struct Node *head2)
{
    Node *a=head1;
    Node *b=head2;
    while(a!=NULL && b!=NULL)
    {
        if(a->data!=b->data)
        {
            return false;
        }
        a=a->next;
        b=b->next;
        
    }
    if(a!=b)
    return false;
    else
    return true;
}