class Solution {
  public:
    int solve(int N, int y, vector<int> A) {
        unordered_map<int,int>res;
        int ans=INT_MIN;
        for(int i=0;i<N;i++)
        {
            res[A[i]-y]+=1;
            ans=max(ans,res[A[i]-y]);
        }
        return ans;
    }
};