class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        ListNode* last=head;
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        while(last->next->next!=NULL)
        {
            last=last->next;
        }
        ListNode* tmp=new ListNode(last->next->val);
        last->next=NULL;
        tmp->next=head;
        return tmp;
    }
};