class Solution{
public:	
	bool balancedNumber(string N)
	{
	    int n=N.length();
	    int mid=n/2;
	    int sum1=0;
	    int sum2=0;
	    for(int i=0;i<mid;i++)
	    {
	        sum1+=N[i];
	    }
	    for(int i=mid+1;i<n;i++)
	    {
	        sum2+=N[i];
	    }
	    if(sum1==sum2)
	    return true;
	    else
	    return false;
	}
};
