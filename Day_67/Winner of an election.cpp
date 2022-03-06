class Solution
{
public:
    // Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[], int n)
    {
        int mx = 0;
        string s;
        vector<string> v;
        map<string, int> us;
        for (int i = 0; i < n; i++)
        {
            us[arr[i]]++;
        }
        for (auto it : us)
        {
            if (it.second > mx)
            {
                mx = it.second;
                s = it.first;
            }
        }
        v.push_back(s);
        v.push_back(to_string(mx));
        return v;
    }
};