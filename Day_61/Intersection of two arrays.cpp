class Solution
{
public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m)
    {
        unordered_set<int> ans;
        for (int i = 0; i < n; i++)
        {
            ans.insert(a[i]);
        }
        int count = 0;
        for (int i = 0; i < m; i++)
        {
            if (ans.find(b[i]) != ans.end())
                count++;
            ans.erase(b[i]);
        }
        return count;
    }
};