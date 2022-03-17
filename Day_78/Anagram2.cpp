class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    const int CHAR=256;
    bool isAnagram(string a, string b){
        
        int n=a.length();
        int m=b.length();
        if(n!=m)
        return false;
        int count[CHAR]={0};
        for(int i=0;i<n;i++)
        {
            count[a[i]]++;
            count[b[i]]--;
        }
        for(int i=0;i<CHAR;i++)
        {
            if(count[i]!=0)
            return false;
        }
        return true;
        
    }

};