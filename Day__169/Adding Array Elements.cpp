class Solution{
  public:
    int minOperations(int arr[], int n, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++)
        {
            pq.push(arr[i]);
        }
        int ans=0;
        while(!pq.empty() && pq.top()<k)
        {
            int p=pq.top();
            pq.pop();
            int q=pq.top();
            pq.pop();
            pq.push(p+q);
            ans++;
        }
        if(pq.top()>=k)
        return ans;
        else
        -1;
    }
};