int helper(Node* first,Node* second,int count)
{
    if(first==NULL || second==NULL || first->data!=second->data)
    return count;
    return helper(first->next,second->next,count+1);
}
int maxPalindrome(Node *head)
{
    Node *prev=NULL;
    Node*curr=head;
    int maxlen=1;
    while(curr!=NULL)
    {
        Node *next=curr->next;
        curr->next=prev;
        maxlen=max(maxlen,2*helper(prev,next,0)+1);
        maxlen=max(maxlen,2*helper(curr,next,0));
        prev=curr;
        curr=next;
    }
    return maxlen;
}