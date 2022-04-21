class Solution
{
    public:
    Node *copyList(Node *head)
    {
        Node *next,*temp;
        for(Node *curr=head;curr!=NULL;)
        {
            next=curr->next;
            curr->next=new Node(curr->data);
            curr->next->next=next;
            curr=next;
        }
        for(Node *curr=head;curr!=NULL;curr=curr->next->next)
        {
            curr->next->arb=(curr->arb!=NULL)?(curr->arb->next):NULL;
        }
        Node *original=head,*copy=head->next;
        temp=copy;
        while(original && copy)
        {
            original->next=(original->next!=NULL)?(original->next->next):original->next;
            copy->next=(copy->next!=NULL)?(copy->next->next):copy->next;
            original=original->next;
            copy=copy->next;
        }
        return temp;
    }

};