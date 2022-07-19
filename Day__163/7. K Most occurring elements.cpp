class Solution
{
    public:
    //Function to return the sum of frequencies of k numbers
    //with most occurrences in an array.
    int kMostFrequent(int arr[], int n, int k) 
    { 
    	unordered_map<int,int>mp;
    	for(int i=0;i<n;i++)
    	{
    	    mp[arr[i]]++;
    	}
    	priority_queue<int>pq;
    	for(auto it:mp)
    	{
    	    pq.push(it.second);
    	}
    	int sum=0;
    	while(k--)
    	{
    	    sum+=pq.top();
    	    pq.pop();
    	}
    	return sum;
    } 
};