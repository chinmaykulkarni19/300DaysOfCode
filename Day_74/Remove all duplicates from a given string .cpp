class Solution{
public:
	string removeDuplicates(string str) {
	    unordered_set<char> us;
	    string ans;
	    for(int i=0;i<str.length();i++)
	    {
	        if(us.find(str[i])==us.end())
	         {
	             us.insert(str[i]);
	        ans+=str[i];
	         }
	        
	    }
	    return ans;
	    
	}
};
