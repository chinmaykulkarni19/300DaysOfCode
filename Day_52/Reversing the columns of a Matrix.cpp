class Solution
{
public:
    // Function to reverse the columns of a matrix.
    void reverseCol(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++)
        {
            int left = 0;
            int right = m - 1;
            while (left <= right)
            {
                swap(matrix[i][left], matrix[i][right]);
                left++;
                right--;
            }
        }
    }
};