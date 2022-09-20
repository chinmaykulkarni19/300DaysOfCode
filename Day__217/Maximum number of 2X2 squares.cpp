class Solution
{
    public:
    long long int numberOfSquares(long long int base)
    {
        long long int b=base/2-1;
        return (b*(b+1))/2;
    }
};