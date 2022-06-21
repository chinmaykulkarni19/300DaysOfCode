void eraseAt(deque <int> &deq, int X)
{
    deq.erase(deq.begin()+X);
}

//Function to erase the elements in range start (inclusive), end (exclusive).
void eraseInRange(deque<int> &deq, int start, int end)
{
    deq.erase(deq.begin()+start,deq.begin()+end);
}

//Function to erase all the elements in the deque.
void eraseAll(deque<int> &deq)
{
   deq.clear();
   
}