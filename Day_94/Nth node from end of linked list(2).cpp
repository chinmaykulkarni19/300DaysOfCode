int getNthFromLast(Node *head, int n)
{
       if(head==NULL)
       return -1;
       Node *first=head;
       for(int i=0;i<n;i++)
       {
           if(first==NULL)
           {
               return -1;
           }
           first=first->next;
       }
       Node *sec=head;
       while(first!=NULL)
       {
           first=first->next;
           sec=sec->next;
       }
       return sec->data;
}