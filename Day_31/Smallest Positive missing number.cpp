class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        int k=1;
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(k==arr[i] && k<=arr[i])
            k++;
        }
        return k;
    } 
};