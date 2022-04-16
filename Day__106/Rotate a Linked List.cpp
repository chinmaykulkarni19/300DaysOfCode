class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        if(k==0)
        {
            return head;
        }
        Node *nex=head;
        Node *prev;
        while(k--!=0 && nex!=NULL)
        {
            prev=nex;
            nex=nex->next;
        }
        if(nex==NULL)
        return head;
        Node *head_tail=nex;
        prev->next=NULL;
        while(nex->next!=NULL)
        {
            nex=nex->next;
        }
        nex->next=head;
        return head_tail;
        
    }
};