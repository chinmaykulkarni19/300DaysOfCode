class Solution
{
public:
    // Function to find element with more appearances between two elements in an
    // array.
    int majorityWins(int arr[], int n, int x, int y)
    {
        int nx = 0, ny = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
                nx++;
            else if (arr[i] == y)
                ny++;
        }
        if (nx == ny)
            return min(x, y);
        else
            return nx > ny ? x : y;
    }
};