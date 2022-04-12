class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        stack<char>res;
        for(Node *curr=head;curr!=NULL;curr=curr->next)
        {
            res.push(curr->data);
        }
        for(Node *curr=head;curr!=NULL;curr=curr->next)
        {
            if(res.top()!=curr->data)
            return false;
            res.pop();
        }
        return true;
        
    }
};