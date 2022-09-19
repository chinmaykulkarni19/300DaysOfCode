class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>in_deg(V,0);
	    vector<int>answer;
	    for(int i=0;i<V;i++)
	    {
	        for(int x:adj[i])
	        {
	            in_deg[x]++;
	        }
	    }
	    queue<int>q;
	    for(int i=0;i<V;i++)
	    {
	        if(in_deg[i]==0)
	        {
	            q.push(i);
	        }
	    }
	    while(!q.empty())
	    {
	        int u=q.front();
	        q.pop();
	        answer.push_back(u);
	        for(int x:adj[u])
	        {
	            if(--in_deg[x]==0)
	            {
	                q.push(x);
	            }
	        }
	    }
	    return answer;
	}
};