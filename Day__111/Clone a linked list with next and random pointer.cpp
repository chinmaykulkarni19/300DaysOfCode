class Solution
{
    public:
    Node *copyList(Node *head)
    {
        unordered_map<Node*,Node*>res;
        for(Node* curr=head;curr!=NULL;curr=curr->next)
        {
            res[curr]=new Node(curr->data);
        }
        for(Node *curr=head;curr!=NULL;curr=curr->next)
        {
            Node *clonecurr=res[curr];
            clonecurr->next=res[curr->next];
            clonecurr->arb=res[curr->arb];
        }
        Node *head2=res[head];
        return head2;
    }

};