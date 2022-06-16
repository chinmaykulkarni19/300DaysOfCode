int chocolates(int arr[], int n)
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        if(arr[low]<arr[high])
        {
            high--;
        }
        else
        low++;
    }
    return arr[low];
    
    
}