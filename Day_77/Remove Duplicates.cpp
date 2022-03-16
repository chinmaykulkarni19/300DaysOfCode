class Solution{
public:	
		
	string removeDups(string S) 
	{
	    
	    for(int i=0;i<S.size();i++)
	    {
	        for(int j=i+1;j<S.size();j++)
	        {
	            if(S[j]==S[i])
	            {
	                S.erase(j,1);    //// Deletes 4 characters from index number 1 str.erase(1, 4);
    
	            j--;
	            }
	            
	        }
	    }
	    return S;
	}
};