class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    priority_queue<int>pq;
	    vector<int>v;
	    
	    for(int i=0;i<n;i++)
	    {
	        pq.push(arr[i]);
	    }
	    for(int i=0;i<k;i++)
	    {
	        v.push_back(pq.top());
	        pq.pop();
	    }
	    return v;
	}

};