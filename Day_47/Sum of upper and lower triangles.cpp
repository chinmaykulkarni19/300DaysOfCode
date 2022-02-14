class Solution
{
public:
    // Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int>> &matrix, int n)
    {
        int mid = 0;
        int up = 0, low = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    mid = mid + matrix[i][j];
                else if ((i - j) < 0)
                    up = up + matrix[i][j];
                else
                    low = low + matrix[i][j];
            }
        }
        return {mid + up, mid + low};
    }
};