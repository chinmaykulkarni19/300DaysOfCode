int findSum(int A[], int N)
    {
    	int mini=A[0];
    	int maxi=A[0];
    	for(int i=1;i<N;i++)
    	{
    	    if(A[i]<mini)
    	    {
    	        mini=A[i];
    	    }
    	    else if(A[i]>maxi)
    	    {
    	        maxi=A[i];
    	    }
    	}
    	return mini+maxi;
    }