int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int>mp;
        mp.insert({0,-1});//dry run for -1,1,-1,1
        
        int sum=0,fans=0;
        for(int i=0;i<n;i++){
            sum+=A[i];
            if(mp.find(sum)==mp.end()){
                mp.insert({sum,i});
            }
            else fans=max(fans,i-mp[sum]);
        }
        
        return fans;
    }