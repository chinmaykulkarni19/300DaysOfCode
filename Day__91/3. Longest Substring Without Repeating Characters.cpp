class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        int ans=0;
        int n=s.size();
        unordered_set<char>res;
        while(j<n)
        {
            while(res.count(s[j])==0 && j<n)
            {
                res.insert(s[j]);
                j++;
            }
            ans=max(ans,j-i);
            
            res.erase(s[i]);
            i++;
        }
        return ans;
    }
};