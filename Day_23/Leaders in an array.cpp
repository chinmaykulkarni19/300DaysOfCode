class Solution
{
    // Function to find the leaders in the array.
public:
    vector<int> leaders(int a[], int n)
    {
        vector<int> v;
        v.push_back(a[n - 1]);
        for (int i = n - 2; i >= 0; i--)
        {
            if (v.back() <= a[i])
                v.push_back(a[i]);
        }
        reverse(begin(v), end(v));
        return v;
    }
};