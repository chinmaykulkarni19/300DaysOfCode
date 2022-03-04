class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        unordered_map<int,int> us;
        for(int i=0;i<N;i++)
        {
            us[A[i]]++;
            us[B[i]]--;
        }
        for(auto x:us)
        {
            if(x.second!=0)
            return false;
            
        }
        return true;
    }
};