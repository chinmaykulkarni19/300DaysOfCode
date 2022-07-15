class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        sort(arr,arr+n,greater<int>());
       
        vector<int>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(arr[i]);
        }
        return ans;
    }
};