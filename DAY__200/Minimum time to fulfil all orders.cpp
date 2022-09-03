class Solution{
    public:
    int findMinTime(int N, vector<int>&A, int L){
        vector<int>res;
        for(auto it:A)
        {
            int ele=it;
            res.push_back(it);
            for(int i=2;i<=N;i++)
            {
                int x=res.back()+(i*ele);
                res.push_back(x);
            }
            
        }
        sort(res.begin(),res.end());
            return res[N-1];
    }
};