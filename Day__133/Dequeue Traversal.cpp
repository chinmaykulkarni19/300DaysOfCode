void printDeque(deque<int> Deq)
{
    while(!Deq.empty())
    {
        cout<<Deq.front()<<" ";
        Deq.pop_front();
    }
    cout<<endl;
} 