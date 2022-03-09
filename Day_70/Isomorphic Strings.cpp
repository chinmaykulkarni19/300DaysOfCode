class Solution
{
public:
    // Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {

        int len = str1.length();
        char seen[128] = {};
        if (str2.length() > str1.length())
            return false;
        for (int i = 0; i < len; i++)
        {
            int c = str1[i];
            if (!seen[c])
            {
                for (auto v : seen)
                {
                    if (v == str2[i])
                        return false;
                }
                seen[c] = str2[i];
            }
            else if (seen[c] != str2[i])
                return false;
        }
        return true;
    }
};