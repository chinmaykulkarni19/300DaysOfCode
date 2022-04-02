int getNthFromLast(Node *head, int n)
{
       Node *curr=head;
       int count=0;
       for(curr=head;curr!=NULL;curr=curr->next)
       {
           count++;
           
       }
       if(count<n)
       {
           return -1;
       }
       curr=head;
       for(int i=1;i<count-n+1;i++)
       {
           curr=curr->next;
       }
       return curr->data;
}