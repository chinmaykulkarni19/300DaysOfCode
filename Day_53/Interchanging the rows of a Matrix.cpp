class Solution
{
public:
    // Function to interchange the rows of a matrix.
    void interchangeRows(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < m; i++)
        {
            int up = 0;
            int bottom = n - 1;
            while (up <= bottom)
            {
                swap(matrix[up][i], matrix[bottom][i]);
                up++;
                bottom--;
            }
        }
    }
};