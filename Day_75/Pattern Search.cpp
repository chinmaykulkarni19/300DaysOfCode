class Solution
{
    public:
    //Function to check if the given pattern exists in the given string or not.
    bool search(string pat, string txt) 
    { 
    	int n=txt.length();
    	int m=pat.length();
    	int j=0;
    	for(int i=0;i<n && j<m ;i++)
    	{
    	    if(txt[i]==pat[j])
    	    j++;
    	    else
    	    j=0;
    	}
    	return {j==m};
    } 
};