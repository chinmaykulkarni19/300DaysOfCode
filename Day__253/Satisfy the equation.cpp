vector<int> satisfyEqn(int A[], int N) {
        // code here
        unordered_map<int,vector<pair<int,int>>>mp;
        for(int i=0;i<N;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                int sum=A[i]+A[j];
                mp[sum].push_back({i,j});
                
            }
        }
        for(int i=0;i<N;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                int curr=A[i]+A[j];
                if(mp.find(curr)!=mp.end())
                {
                    for(auto it:mp[curr])
                    {
                        int a =it.first;
                        int b=it.second;
                        if(a!=i && a!=j && b!=i && b!=j)
                        {
                            return {i,j,a,b};
                        }
                    }
                }
            }
        }
        return {-1,-1,-1,-1};
    }