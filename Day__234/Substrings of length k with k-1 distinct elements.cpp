int countOfSubstrings(string S, int K) {
        int i=0,count=0;
        int n=S.size();
        unordered_map<char,int>res;
        while(i<K-1)
        {
            res[S[i]]++;
            i++;
        }
        while(i<n)
        {
            res[S[i]]++;
            if(res.size()==K-1)
            {
                count++;
            }
            res[S[i-(K-1)]]--;
            if(res[S[i-(K-1)]]==0)
            {
                res.erase(S[i-(K-1)]);
            }
            i++;
        }
        return count;
    }