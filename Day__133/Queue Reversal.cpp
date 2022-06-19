queue<int> rev(queue<int> q)
{
    stack<int>res;
    while(!q.empty())
    {
        res.push(q.front());
        q.pop();
    }
    while(!res.empty())
    {
        q.push(res.top());
        res.pop();
    }
    return q;
}