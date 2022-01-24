class Solution
{
public:
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N)
    {
        int i = 0, j = N - 1, mx = 0;
        while (i <= j)
        {
            if (A[i] <= A[j])
            {
                mx = max(mx, j - i);
                i++;
                j = N - 1;
            }
            else
                j--;
        }
        return mx;
    }
};