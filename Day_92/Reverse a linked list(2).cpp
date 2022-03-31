class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(head==NULL || head->next==NULL)
        return head;
        Node *last=reverseList(head->next);
        Node *sec=head->next;
        sec->next=head;
        head->next=NULL;
        return last;
    }
    
};