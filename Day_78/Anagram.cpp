class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        int n=a.length();
        int m=b.length();
        if(n!=m)
        return false;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a==b)
        return true;
        
    }

};