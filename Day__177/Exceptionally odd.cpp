class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        unordered_map<int,int>res;
        for(int i=0;i<n;i++)
        {
            res[arr[i]]++;
        }
        for(auto it:res)
        {
            if(it.second%2!=0)
            {
                return it.first;
            }
        }
        return -1;
    }
};