class Solution {
  public:
    string findSum(string X, string Y) {
        int i=X.size()-1;
        int j=Y.size()-1;
        int carry=0;
        string ans;
        while(i>=0||j>=0||carry)
        {
            int sum=0;
            if(i>=0)
            {
                sum+=X[i]-'0';
                i--;
            }
            if(j>=0)
            {
                sum+=Y[j]-'0';
                j--;
            }
            sum+=carry;
            carry=sum/10;
            ans=to_string(sum%10)+ans;
        }
        while(1)
        {
            if(ans[0]=='0' && ans.size()>1)
            {
                ans.erase(ans.begin());
            }
            else
            break;
        }
        return ans;
    }
};