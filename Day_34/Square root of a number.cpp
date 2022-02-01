class Solution
{
public:
    long long int floorSqrt(long long int x)
    {
        long long int l = 1, h = x, ans = -1;
        while (l <= h)
        {
            long long int mid = (l + h) / 2;
            long long int msq = mid * mid;
            if (msq == x)
            {
                return mid;
            }

            else if (msq > x)
            {
                h = mid - 1;
            }

            else
            {
                l = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }
};