class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        stack<int>s;
        vector<int>ans(n);
        ans[0]=-1;
        s.push(a[0]);
        for(int i=1;i<n;i++)
        {
            while(!s.empty() && s.top()>=a[i])
            {
                s.pop();
            }
            ans[i]=s.empty()?-1:s.top();
            s.push(a[i]);
        }
        return ans;
    }
};