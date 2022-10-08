int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int mini,maxi;
        mini=arr[0];
        maxi=arr[n-1];
        int diff=maxi-mini;
        for(int i=1;i<n;i++)
        {
            
            mini=min(arr[0]+k,arr[i]-k);
            maxi=max(arr[n-1]-k,arr[i-1]+k);
            diff=min(diff,maxi-mini);
        }
        return diff;
        
    }