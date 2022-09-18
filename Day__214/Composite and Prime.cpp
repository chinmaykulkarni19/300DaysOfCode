bool isprime(int n)
	{
	    if(n==0 || n==1)
	    {
	        return false;
	    }
	    if(n==2||n==3)
	    {
	        return true;
	    }
	    if(n%2==0 || n%3==0)
	    {
	        return false;
	    }
	    for(int i=4;i<=sqrt(n);i++)
	    {
	        if(n%i==0)
	        {
	            return false;
	        }
	    }
	    return true;
	}
		int Count(int L, int R){
		    int prime=0;
		    int comp=0;
		    for(int i=L;i<=R;i++)
		    {
		        if(i==1)
		        {
		            continue;
		        }
		        if(isprime(i))
		        {
		            prime++;
		        }
		        else{
		            comp++;
		        }
		    }
		    return comp-prime;
		}