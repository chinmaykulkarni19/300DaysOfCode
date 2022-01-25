class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        vector<vector<int>> ans;
        for(int i=1;i<A.size();i++)
        {
            if(A[i]>A[i-1])
            {
                ans.push_back({i-1,i});
            }
        }
        return ans;
    }
};