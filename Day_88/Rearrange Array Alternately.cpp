class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	int l=0,h=n-1,max=arr[n-1]+1;
    	for(int i=0;i<n;i=i+2)
    	{
    	    arr[i]+=(arr[h--]%max)*max;
    	}
    	for(int i=1;i<n;i=i+2)
    	{
    	    arr[i]+=(arr[l++]%max)*max;
    	}
    	for(int i=0;i<n;i++)
    	{
    	    arr[i]=arr[i]/max;
    	}
    	 
    }
};