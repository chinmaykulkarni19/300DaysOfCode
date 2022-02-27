class Solution{
    public:
    //Complete this function
    //Function to return the count of non-repeated elements in the array.
    int countNonRepeated(int arr[], int n)
    {
        unordered_map<int,int> ans;
        int count=0;
        for(int i=0;i<n;i++)
        {
            ans[arr[i]]++;
        }
        for(auto it:ans)
        {
            if((it.second)==1)
            count++;
        }
        return count;
    }

}