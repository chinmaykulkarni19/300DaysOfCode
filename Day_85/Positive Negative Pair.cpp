class Solution{
  public:
    //Function to return list containing all the pairs having both
    //negative and positive values of a number in the array.
    vector <int> findPairs(int arr[], int n) 
    {
        vector<int> res;
        unordered_map<int,int> us;
        for(int i=0;i<n;i++)
        {
            us[abs(arr[i])]++;
            if(us[abs(arr[i])]>1)
            {
                res.push_back(-1*abs(arr[i]));
                res.push_back(abs(arr[i]));
            }
        }
        return res;
    }
};