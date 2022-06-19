queue<int> modifyQueue(queue<int> q, int k) {
    stack<int>res;
    for(int i=0;i<k;i++)
    {
        res.push(q.front());
        q.pop();
    }
    queue<int>ans;
    while(!res.empty())
    {
        ans.push(res.top());
        res.pop();
    }
    while(!q.empty())
    {
        ans.push(q.front());
        q.pop();
    }
    return ans;
}