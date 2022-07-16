class Solution
{
    public:
    //Function to find the kth smallest element in the array.
    int kthSmallest(int arr[], int n, int k)
    {
        priority_queue<int>pq;
        for(int i=0;i<k;i++)
        {
            pq.push(arr[i]);
        }
        for(int i=k;i<n;i++)
        {
            if(pq.top()>arr[i])
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        return pq.top();
    }
};