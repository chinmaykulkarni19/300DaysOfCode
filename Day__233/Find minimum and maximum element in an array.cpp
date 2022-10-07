pair<long long, long long> getMinMax(long long a[], int n) {
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]<mini)
        {
            mini=a[i];
        }
        if(a[i]>maxi)
        {
            maxi=a[i];
        }
    }
    return {mini,maxi};
}