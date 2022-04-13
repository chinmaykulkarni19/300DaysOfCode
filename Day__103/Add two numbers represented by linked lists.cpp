class Solution
{
   public:
   Node* reverse(Node *ptr)
   {
       Node* curr = ptr;
       Node* prev = nullptr;
       Node* next = nullptr;
       
       while(curr)
       {
           next = curr->next;
           curr->next = prev;
           prev = curr;
           curr = next;
       }
       
       return prev;
   }
   //Function to add two numbers represented by linked list.
   struct Node* addTwoLists(struct Node* first, struct Node* second)
   {
       // code here
       first = reverse(first);
       second = reverse(second);
       
       int carry = 0;
       
       Node* dummy = new Node(-1);
       Node* x = dummy;
       while(carry || first || second)
       {
           int num = 0;
           
           if(first)
           {
               num += first->data;
               first = first->next;
           }
           if(second)
           {
               num += second->data;
               second = second->next;
           }
           
           num += carry;
           
           carry = num/10;
           
           Node *temp = new Node(num%10);
           x->next = temp;
           x = temp;
       }
       
       return dummy=reverse(dummy->next);
   }
};