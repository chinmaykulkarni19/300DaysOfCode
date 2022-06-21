class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       stack<int>s;
       vector<int>res(n);
       s.push(0);
       res[0]=1;
       for(int i=1;i<n;i++)
       {
           while(s.empty()==false && price[s.top()]<=price[i])
           {
               s.pop();
           }
           int ans=s.empty()?i+1:i-s.top();
           res[i]=ans;
           s.push(i);
       }
       return res;
    }
};