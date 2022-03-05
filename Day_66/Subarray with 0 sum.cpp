class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_set<int> ans;
        int sum=0;
        
        for(int i=0;i<n;i++)
        {   sum+=arr[i];
            
            if(ans.find(sum)!=ans.end())
            return true;
            if(sum==0)
            return true;
            ans.insert(sum);
        }
        return false;
    }
};