class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long>res;
        vector<long long>ans(n);
        res.push(arr[n-1]);
        ans[n-1]=-1;
        for(int i=n-2;i>=0;i--)
        {
            while(!res.empty() && res.top()<=arr[i])
            {
                res.pop();
            }
            ans[i]=res.empty()?-1:res.top();
            res.push(arr[i]);
        }
        return ans;
    }
};