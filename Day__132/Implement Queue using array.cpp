void MyQueue :: push(int x)
{
        arr[rear++]=x;
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{       
        if(front==rear)
        return -1;
        int x=arr[front++];
        return x;
}