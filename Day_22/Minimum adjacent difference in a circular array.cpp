class Solution{
    public:
    //Function to find minimum adjacent difference in a circular array.
    // arr[]: input array
    // n: size of array
    int minAdjDiff(int arr[], int n){    
        int res=INT_MAX;
        for(int i=0;i<n;i++)
        {
            res=min(res,abs(arr[i+1]-arr[i]));
        }
        int last=abs(arr[n-1]-arr[0]);
        return min(res,last);
    }
};