class Solution
{
    public:
    //Function to print kth largest element for each element in the stream.
    void kthLargest(int arr[], int n, int k)
    {
    	priority_queue<int,vector<int>,greater<int>>pq;
    	for(int i=0;i<k-1;i++)
    	{
    	    pq.push(arr[i]);
    	    cout<<-1<<" ";
    	}
    	pq.push(arr[k-1]);
    	cout<<pq.top()<<" ";
    	for(int i=k;i<n;i++)
    	{
    	    if(pq.top()<arr[i])
    	    {
    	        pq.pop();
    	        pq.push(arr[i]);
    	    }
    	    cout<<pq.top()<<" ";
    	}
    }
};