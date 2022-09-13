class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
         int ans=0,sum=0;
         unordered_map<int,int>res;
         for(int i=0;i<N;i++)
         {
             sum+=A[i];
             if(sum==K)
             {
                 ans=i+1;
             }
             if(res.find(sum-K)!=res.end())
             {
                 ans=max(ans,i-res[sum-K]);
             }
             if(res.find(sum)==res.end())
             {
                 res[sum]=i;
             }
         }
         return ans;
    } 
};