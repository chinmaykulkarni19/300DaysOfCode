stack<int> _push(int arr[],int n)
{
   stack<int>s;
   s.push(arr[0]);
   for(int i=1;i<n;i++)
   {
       if(arr[i]>s.top())
       {
           s.push(s.top());
       }
       else
       {
           s.push(arr[i]);
       }
   }
   return s;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    // your code here
}