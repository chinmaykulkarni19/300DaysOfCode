class Solution{
    public:
    //Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum)
    {
        unordered_map<int,int> us;
        int count=0,pre=0;
        for(int i=0;i<n;i++)
        {
            pre=pre+arr[i];
            if(pre==sum)
            count++;
            if(us.find(pre-sum)!=us.end())
            {
                count+=us[pre-sum];
            }
            us[pre]++;
        }
        return count;
    }
};