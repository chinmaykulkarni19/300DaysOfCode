class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        stack<int>res;
        for(int i=1;i<=(sizeOfStack/2)+1;i++)
        {
            res.push(s.top());
            s.pop();
        }
        res.pop();
        while(!res.empty())
        {
            s.push(res.top());
            res.pop();
        }
    }
};