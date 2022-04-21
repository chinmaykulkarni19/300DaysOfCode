class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        Node *curr=head;
        Node *prev=NULL;
        unordered_set<int> res;
        while(curr!=NULL)
        {
            if(res.find(curr->data)!=res.end())
            {
                prev->next=curr->next;
                delete(curr);
            }
            else
            {
                res.insert(curr->data);
                prev=curr;
            }
            curr=prev->next;
        }
        return head;
    }
};