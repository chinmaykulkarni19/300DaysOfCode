class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        int res=arr[0];
        int maxending=arr[0];
        for(int i=1;i<n;i++)
        {
            maxending=max(maxending+arr[i],arr[i]);
            res=max(res,maxending);
        }
        return res;
        
    }
};