class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        Node *temp=head;
        int count=0;
        for(temp=head;temp!=NULL;temp=temp->next)
        {
            count++;
        }
        return count;
    
    }
};