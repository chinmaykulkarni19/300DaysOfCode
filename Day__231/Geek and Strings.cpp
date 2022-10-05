vector<int> prefixCount(int N, int Q, string li[], string query[])
    {
        unordered_map<string,int>res;
        for(int i=0;i<N;i++)
        {
            string str="";
            for(auto x:li[i])
            {
                str+=x;
                res[str]++;
            }
        }
        vector<int>ans;
        for(int i=0;i<Q;i++)
        {
            ans.push_back(res[query[i]]);
        }
        return ans;
    }