class Solution{
public:
    
    bool isFit(int arr[], int brr[], int n){
        sort(arr,arr+n);
        sort(brr,brr+n);
        int i=0,j=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>brr[i])
            {
                return false;
            }
        }
        return true;
    }
};