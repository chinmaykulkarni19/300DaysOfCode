vector<alphanumeric> sortedStrings(int N, vector<string> A) {
        // code here
        map<string,int>res;
        for(auto it:A)
        {
            res[it]++;
        }
        vector<alphanumeric>ans;
        for(auto it:res)
        {
            ans.push_back({it.first,it.second});
        }
        return ans;
        
    }