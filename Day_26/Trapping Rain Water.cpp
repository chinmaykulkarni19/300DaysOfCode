class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        long long res=0;
        int l[n];
        int r[n];
        
        l[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            l[i]=max(arr[i],l[i-1]);
        }
        r[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            r[i]=max(arr[i],r[i+1]);
        }
        for(int i=1;i<n;i++)
        {
            res=res+(min(l[i],r[i])-arr[i]);
        }
        return res;
    }
};