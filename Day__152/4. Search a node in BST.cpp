bool search(Node* root, int x) {
   if(root==NULL)
   return false;
   if(root->data==x)
   {
       return true;
   }
   else if(root->data>x)
   {
       search(root->left,x);
   }
   else
   {
       search(root->right,x);
   }
}
