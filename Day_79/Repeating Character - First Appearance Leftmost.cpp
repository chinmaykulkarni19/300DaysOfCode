
class Solution
{
    public:
    //Function to find repeated character whose first appearance is leftmost.
    int repeatedCharacter (string s) 
    { 
        for(int i=0;i<s.size();i++)
        {
            for(int j=i+1;j<s.size();j++)
            {
                if(s[i]==s[j])
                return i;
            }
        }
        return -1;
    } 
};