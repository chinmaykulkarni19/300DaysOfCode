class Solution{
  public:
    int solve(int res,int arr2[],int n)
    {
        int l=0,h=n-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(arr2[mid]<=res)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        return l;
    }
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
        vector<int> ans;    
        sort(arr2,arr2+n);
        
        for(int i=0;i<m;i++){
            
            int res=arr1[i];
            
            ans.push_back(solve(res,arr2,n));
        }
        
        return ans;
    }
};