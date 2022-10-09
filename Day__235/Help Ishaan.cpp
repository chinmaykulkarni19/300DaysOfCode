bool isPrime(int N)
	{
	    if(N<=1)
	    {
	        return false;
	    }
	    for(int i=2;i<=sqrt(N);i++)
	    {
	        if(N%i==0)
	        {
	            return false;
	        }
	    }
	    return true;
	}
		int NthTerm(int N){
		    int i=N;
		    int j=N;
		    while(true)
		    {
		        if(isPrime(i))
		        {
		            break;
		        }
		        if(isPrime(j))
		        {
		            break;
		        }
		        i--;
		        j++;
		    }
		    return min(abs(N-i),abs(N-j));
		}