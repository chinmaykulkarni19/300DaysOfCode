class Solution
{
public:
    // arr1,arr2 : the arrays
    //  n, m: size of arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int> v;
        set<int> ans;
        for (int i = 0; i < n; i++)
        {
            ans.insert(arr1[i]);
        }
        for (int j = 0; j < m; j++)
        {
            ans.insert(arr2[j]);
        }
        for (auto val : ans)
        {
            v.push_back(val);
        }
        return v;
    }
};