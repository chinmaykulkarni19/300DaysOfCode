class Solution {
    public:
    const int p = 1000003;
    long long dp[1000004];
    
    void fact()
    {
        dp[0]=1;
        for(int i=1; i<=p; i++)
        {
            dp[i] = ((long long)i%p*dp[i-1]%p)%p;
        }
    }
    
    long long modularExponentiation(long long a,long long b)
    {
        if(b==0) return 1;
        
        if(b%2==0)
        {
            return modularExponentiation((long long)(a%p*a%p)%p,b/2)%p;
        }else{
            return ((long long)a%p*modularExponentiation(a,b-1)%p)%p;
        }
        
    }
    
    long long lucas(long long n, long long r)
    {
        
        if(n < r)
        {
            return 0;
        }
        
        long long a = dp[n];
        long long b = dp[r];
        long long c = dp[n-r];
        long long den = ((long long)(b%p*c%p))%p;
        long long num = ((long long)a%p*modularExponentiation(den,p-2)%p)%p;
        return num;
    }
    
    long long solve(long long n, long long r)
    {
        if(r==0)
        {
            return 1;
        }
        if(n < r)
        {
            return 0;
        }
        long long last_n = n%p;
        long long last_r = r%p;
        
        return ((long long)solve(n/p,r/p)*lucas(last_n,last_r))%p;
    }
    int nCr(long long n, long long r) {
        fact();
        return solve(n,r);
    }
};