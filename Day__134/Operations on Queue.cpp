class Solution{
    public:
    
    //Function to push an element in queue.
    void enqueue(queue<int> &q,int x)
    {
        q.push(x);
    }
     
    //Function to remove front element from queue.
    void dequeue(queue<int> &q)
    {
        q.pop();
    }
    
    //Function to find the front element of queue.
    int front(queue<int> &q)
    {
        int t=q.front();
        return t;
    }
    
    //Function to find an element in the queue.
    string find(queue<int> q, int x)
    {
        while(!q.empty())
        {
            if(q.front()==x)
            {
                return "Yes";
            }
            else
            q.pop();
        }
        return "No";
    }
};