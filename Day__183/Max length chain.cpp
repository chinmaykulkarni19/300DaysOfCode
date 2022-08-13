class Solution{
public:
    /*You are required to complete this method*/
    static bool comp(pair<int,int>a,pair<int,int>b)
    {
        return a.second<b.second;
    }
    int maxChainLen(struct val p[],int n){
        vector<pair<int,int>>res;
        for(int i=0;i<n;i++)
        {
            res.push_back({p[i].first,p[i].second});
        }
        sort(res.begin(),res.end(),comp);
        int i=0;
        int j=1;
        int count=1;
        int s=res.size();
        while(j<s)
        {
            if(res[i].second<res[j].first)
            {
                count++;
                i=j;
                j++;
            }
            else
            {
                j++;
            }
        }
        return count;
    }
};