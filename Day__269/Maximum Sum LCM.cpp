long long int maxSumLCM(int n) 
    {
        // code here
        long long ans=0;
        for(int i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(i==n/i)
                {
                    ans+=i;//n is a perfect square, so add that factor once.
                }
                else{
                    ans+=i+n/i;//Add both factors as they are different.
                }
            }
        }
        return ans;
    }