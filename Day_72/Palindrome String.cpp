class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    int low=0,high=S.size()-1;
	    while(low<high)
	    {
	        if(S[low]!=S[high])
	        return false;
	        low++;
	        high--;
	    }
	    return true;
	}

};