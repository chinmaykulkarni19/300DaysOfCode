void addNode(Node *head, int pos, int data)
{
   Node *curr=head;
   Node *temp=new Node(data);
   for(int i=0;i<pos;i++)
   {
       curr=curr->next;
   }
   if(curr->next!=NULL)
   {
       temp->next=curr->next;
       curr->next=temp;
       temp->prev=curr;
       curr->next->prev=temp;
       
    }
    else
    {
        temp->prev=curr;
        curr->next=temp;
    }
   
}