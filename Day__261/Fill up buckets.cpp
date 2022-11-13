int totalWays(int n, vector<int>capacity) {
          sort(capacity.begin(),capacity.end());
          long long res=1;
          long long mod=1000000007;
          for(int i=0;i<n;i++)
          {
              res=((res)*(capacity[i]-i))%mod;
          }
          return res%mod;
    }