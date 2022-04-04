int countNodesinLoop(struct Node *head)
{   
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            break;
        }
    }
    if(slow!=fast)
    return 0;
    int count=1;
    
    while(slow->next!=fast)
    {
        slow=slow->next;
        count++;
    }
    return count;
}