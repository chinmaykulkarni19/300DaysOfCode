class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int arr[],int n)
    {
        multimap<int,int>res;
        map<int,int>m;
        vector<int> up;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        for(auto it=m.rbegin();it!=m.rend();it++)
        {
            res.insert({it->second,it->first});
        }
        for(auto it=res.rbegin();it!=res.rend();it++)
        {
            for(int j=0;j<it->first;j++)
            {
                up.push_back(it->second);
            }
        }
        return up;
    }
};