class Solution{
public:	
	int search(int A[], int N){
	    unordered_map<int,int>res;
	    int count=0;
	    for(int i=0;i<N;i++)
	    {
	        res[A[i]]++;
	    }
	    int ans;
	    for(auto it:res)
	    {
	        if(it.second==1)
	        {
	            ans=it.first;
	            break;
	        }
	    }
	    return ans;
	    
	}
};