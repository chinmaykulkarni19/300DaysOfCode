class Solution
{
public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n)
    {
        unordered_map<int, int> ans;
        for (int i = 0; i < n; i++)
        {
            ans[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (ans[arr[i]] > 1)
                return i + 1;
        }
        return -1;
    }
};