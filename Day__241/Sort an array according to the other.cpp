class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        vector<int>ans;
        map<int,int>res;
        for(int i=0;i<N;i++)
        {
            res[A1[i]]++;
        }
        int j=0;
        for(int i=0;i<M;i++)
        {
            if(res.find(A2[i])!=res.end())
            {
                while(res[A2[i]]!=0)
                {
                    ans.push_back(A2[i]);
                res[A2[i]]--;
                }
                res.erase(A2[i]);
            }
        }
        for(auto itr=res.begin();itr!=res.end();itr++)
        {
            while(itr->second>0)
            {
                ans.push_back(itr->first);
                (itr->second)--;
            }
        }
        return ans;
    } 
};