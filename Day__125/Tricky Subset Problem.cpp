class Solution{
public:
    int isPossible(long long S, long long N, long long X, long long A[])
    {
        vector<long long>res;
        res.push_back(S);
        long long curr=S;
        for(long long i=0;i<N;i++)
        {
            long long temp=curr+A[i];
            res.push_back(temp);
            if(temp>=X)
            {
                break;
            }
            curr=curr+temp;
        }
        long long i=res.size()-1;
        while(i>=0 && X>0)
        {
            if(X>=res[i])
            {
                X=X-res[i];
            }
            i--;
        }
        if(X==0)
        return true;
        else
        return false;
    }
};