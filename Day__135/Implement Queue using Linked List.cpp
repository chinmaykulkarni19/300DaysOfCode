void MyQueue:: push(int x)
{
        QueueNode *temp=new QueueNode(x);
        if(front==NULL)
        {
            front=rear=temp;
            return;
        }
        rear->next=temp;
        rear=temp;
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
    int ans;
    if(front==NULL)
    {
        ans=-1;
    }
    else
    {
        ans=front->data;
        front=front->next;
    }
    return ans;
     