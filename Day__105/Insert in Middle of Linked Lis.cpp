Node* insertInMiddle(Node* head, int x)
{
	Node *slow=head;
	Node *fast=head;
	while(fast->next!=NULL && fast->next->next!=NULL)
	{
	    slow=slow->next;
	    fast=fast->next->next;
	}
	Node *temp=new Node(x);
	temp->next=slow->next;
	slow->next=temp;
	return head;
}