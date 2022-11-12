int characterReplacement(string s, int k){
		    // Code here
		    int start=0;
		    int maxlen=0;
		    int maxchar=0;
		    unordered_map<char,int>mp;
		    for(int end=0;end<s.size();end++)
		    {
		         mp[s[end]]++;
		         maxchar=max(maxchar,mp[s[end]]);
		         if((end-start+1-maxchar)>k)
		         {
		             mp[s[start]]--;
		             start++;
		         }
		         maxlen=max(maxlen,end-start+1);
		    }
		    return maxlen;
		}Maximum Sub-String after at most K changes