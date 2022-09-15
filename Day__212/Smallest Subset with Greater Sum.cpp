class Solution{
    public:
    int minSubset(vector<int> &Arr,int N){
        sort(Arr.begin(),Arr.end());
         long long sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=Arr[i];
        }
         long long curr=0;
        for(int i=N-1;i>=0;i--)
        {
            curr+=Arr[i];
            if(curr>(sum-curr))
            {
                return N-i;
            }
        }
        
    }
};