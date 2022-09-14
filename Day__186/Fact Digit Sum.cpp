class Solution{
	public:
	vector<int> FactDigit(int N)
	{
	    vector<int>ans;
	    vector<long long>res(10,1);
	    for(int i=2;i<=9;i++)
	    {
	        res[i]=res[i-1]*i;
	    }
	    int i=9;
	    while(N>0 && i>=0)
	    {
	        if(N<res[i])
	        {
	            i--;
	            continue;
	        }
	        N=N-res[i];
	        ans.push_back(i);
	    }
	    reverse(ans.begin(),ans.end());
	    return ans;
	}
};