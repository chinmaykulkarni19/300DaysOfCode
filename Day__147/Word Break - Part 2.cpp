class Solution{
public:

    vector<string>ans;
    void solve(int n,vector<string>&d,string s,int cur,string a)
    {
        if(cur>=s.size())
        {
            ans.push_back(a.substr(1)); //its take from all character from cats.....
            return;
        }
        for(int i=0;i<n;i++)
        {
            string x=d[i];
            string y=s.substr(cur,x.size());
            if(x==y)
            {
                string z=a+" "+x;
                solve(n,d,s,cur+x.size(),z);
            }
        }
        return;
    }

    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        string a="";
        solve(n,dict,s,0,a);
        return ans;
        
    }
};