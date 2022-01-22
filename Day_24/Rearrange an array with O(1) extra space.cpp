class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
        long long a[n];
        int l=0;
        for(int i=0;i<n;i++)
        {
            a[i]=arr[arr[l]];
            l++;
        }
        for(int i=0;i<n;i++)
        arr[i]=a[i];
        
        
        
    }
};