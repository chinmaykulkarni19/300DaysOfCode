class Solution
{
public:
    // Function to exchange first column of a matrix with its last column.
    void exchangeColumns(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++)
        {
            swap(matrix[i][0], matrix[i][m - 1]);
        }
    }
};