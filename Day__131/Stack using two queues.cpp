void QueueStack :: push(int x)
{
        q2.push(x);
   while(!q1.empty())
   {
       q2.push(q1.front());
       q1.pop();
   }
   queue<int>q=q1;
   q1=q2;
   q2=q;
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        if(q1.empty())
    return -1;
     int data = q1.front();
   q1.pop();
   return data;       
}