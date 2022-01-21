class Solution
{
public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        int l_sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (l_sum == (sum - a[i]))
                return i + 1;

            l_sum = l_sum + a[i];
            sum = sum - a[i];
        }
        return -1;
    }
};