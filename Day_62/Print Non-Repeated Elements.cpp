class Solution
{
public:
    // arr[]: input array
    // n: size of array
    // Function to return non-repeated elements in the array.
    vector<int> printNonRepeated(int arr[], int n)
    {
        unordered_map<int, int> us;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            us[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (us[arr[i]] == 1)
                v.push_back(arr[i]);
        }
        return v;
    }
};