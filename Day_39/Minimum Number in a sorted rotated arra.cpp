class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(arr[mid]==arr[high])
            high--;
            else if(arr[mid]>arr[high])
            low=mid+1;
            else
            high--;
        }
        return arr[high];
        
    }
};