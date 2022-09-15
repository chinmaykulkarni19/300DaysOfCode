int findFrequency(vector<int> v, int x){
    unordered_map<int,int>res;
    for(int i=0;i<v.size();i++)
    {
        res[v[i]]++;
    }
    for(auto it:res)
    {
        if(it.first==x)
        {
            return it.second;
        }
    }
    return 0;
}