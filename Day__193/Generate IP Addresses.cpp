class Solution{
  public:
    bool isvalid(string s)
    {
        int n=s.length();
        if(n==0 || n>3 || s[0]=='0' && n>1||stoi(s)>255)
        {
            return false;
        }
        return true;
    }
    vector<string> genIp(string &s) {
        int n=s.length();
        vector<string>res;
        if(n>12)
        return res;
        for(int i=1;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    string first=s.substr(0,i);
                    string second=s.substr(i,j-i);
                    string third=s.substr(j,k-j);
                    string fourth=s.substr(k,n-k);
                    
                    if(isvalid(first)&&isvalid(second)&&isvalid(third)&&isvalid(fourth))
                    {
                        res.push_back(first+"."+second+"."+third+"."+fourth);
                    }
                }
            }
        }
        return res;
    }

};