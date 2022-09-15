class Solution {
  public:
    long long int nthFibonacci(long long int n){
        long long int res=0,first=0,second=1;
        for(int i=2;i<=n;i++)
        {
            res=(first+second)%1000000007;
            first=second;
            second=res;
        }
        return res;
    }
};