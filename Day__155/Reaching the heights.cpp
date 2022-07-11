vector<int> reaching_height(int n, int a[]) {
    vector<int>ans;
    sort(a,a+n,greater<int>());
    int l=0,r=n-1;
    
    if(n>1 && a[0]==a[n-1])
    {
        return {-1};
    }
    while(l<r)
    {
        ans.push_back(a[l++]);
        ans.push_back(a[r--]);
    }
    if(l==r)
    {
        ans.push_back(a[l]);
    }
    return ans;
}