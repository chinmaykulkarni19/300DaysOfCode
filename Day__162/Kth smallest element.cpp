class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int>mp;
        int n=r-l+1;
        for(int i=0;i<k;i++)
        {
            mp.push(arr[i]);
        }
        for(int i=k;i<n;i++)
        {
            if(arr[i]<mp.top())
            {
                mp.pop();
            mp.push(arr[i]);
            }
        }
        return mp.top();
    }
};