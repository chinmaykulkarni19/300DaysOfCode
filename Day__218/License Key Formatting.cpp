class Solution
{
   public:
    string ReFormatString(string S, int K){
    	string ans="";
    	int count=0;
    	int n=S.size();
    	for(int i=n-1;i>=0;i--)
    	{
    	    if(S[i]=='-')
    	    {
    	        continue;
    	    }
    	    if(S[i]>='a' && S[i]<='z')
    	    {
    	        ans.push_back(S[i]-'a'+'A');
    	    }
    	    else{
    	        ans.push_back(S[i]);
    	    }
    	    count=(count+1)%K;
    	    if(count==0)
    	    {
    	        ans.push_back('-');
    	    }
    	}
    	reverse(ans.begin(),ans.end());
    	return ans[0]=='-'?ans.substr(1):ans;
    	
    }
};