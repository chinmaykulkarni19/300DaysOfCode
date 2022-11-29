int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int i=0;
    	int j=0;
    	int counttrain=0;
    	int ans=0;
    	while(i<n)
    	{
    	    if(arr[i]<=dep[j])
    	    {
    	        counttrain++;
    	        i++;
    	    }
    	    else{
    	        counttrain--;
    	        j++;
    	    }
    	    ans=max(ans,counttrain);
    	}
    	return ans;
    }