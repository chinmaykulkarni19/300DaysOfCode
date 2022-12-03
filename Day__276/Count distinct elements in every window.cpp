public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        unordered_map<int,int>mp;
        for(int i=0;i<k;i++)
        {
            mp[A[i]]++;
        }
        vector<int>res;
        res.push_back(mp.size());
        
        int left=0;
        for(int i=k;i<n;i++)
        {
            mp[A[left]]--;
            if(mp[A[left]]==0)
            {
                mp.erase(A[left]);
            }
            left++;
            mp[A[i]]++;
            res.push_back(mp.size());
        }
        return res;
    }