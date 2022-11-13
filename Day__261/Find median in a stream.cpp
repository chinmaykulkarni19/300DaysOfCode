priority_queue<int>max_heap;
        priority_queue<int,vector<int>,greater<int>>min_heap;
   //Function to insert heap.
   void insertHeap(int &x)
   {
       if(max_heap.size()>0 && x>max_heap.top())
        {
            min_heap.push(x);
        }
        else{
            max_heap.push(x);
        }
       balanceHeaps();
   }
   
   //Function to balance heaps.
   void balanceHeaps()
   {
       if(min_heap.size()>max_heap.size()+1)
        {
            max_heap.push(min_heap.top());
            min_heap.pop();
        }
        if(max_heap.size()>min_heap.size()+1)
        {
            min_heap.push(max_heap.top());
            max_heap.pop();
        }     
   }
   
   //Function to return Median.
   double getMedian()
   {
       if(min_heap.size()==max_heap.size())
        {
            return (max_heap.top()+min_heap.top())/2.0;
        }
        if(max_heap.size()>min_heap.size())
            return max_heap.top();
        else
            return min_heap.top();
   }