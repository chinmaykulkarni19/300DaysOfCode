class Solution
{
    public:
    //Function to find repeated character whose first appearance is leftmost.
    const int CHAR=256;
    int repeatedCharacter (string s) 
    { 
        int count[CHAR]={0};
        for(int i=0;i<s.size();i++)
        {
            count[s[i]]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(count[s[i]]>1)
            return i;
        }
        return -1;
    } 
};