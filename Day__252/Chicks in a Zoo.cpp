long long int NoOfChicks(int n){
	    // Code here
	    long long int res[n+1];
	    long long int sum=1;
	    res[0]=0;
	    res[1]=1;
	    int idx=0;
	    for(int i=2;i<=n;i++)
	    {
	        if(i>=6)
	        {
	            sum=sum-res[idx++];
	        }
	        res[i]=2*sum;
	        sum+=res[i];
	    }
	    return sum;
	}