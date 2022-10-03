bool isprime(int k)
  {
      for(int i=2;i<k;i++)
      {
          if(k%i==0)
          {
              return 0;
          }
      }
      return 1;
  }
  int solve(int n)
  {
      if(isprime(n))
      {
          return n;
      }
      int s=0;
      for(int i=2;i<n;i++)
      {
          if(n%i==0 && isprime(i))
          {
              s+=i;
          }
      }
      return s;
  }
    int sumOfAll(int l, int r){
        // code here
        int ans=0;
        for(int i=l;i<=r;i++)
        {
             ans+=solve(i);
        }
        return ans;
    }