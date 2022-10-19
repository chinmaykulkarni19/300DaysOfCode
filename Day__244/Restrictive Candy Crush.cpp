//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    string Reduced_String(int k,string s){
        // Your code goes here
        stack<pair<char,int>>st;
        if(k==1)
        {
            return "";
        }
        for(int i=0;i<s.size();i++)
        {
            if(st.empty())
            {
                st.push({s[i],1});
            }
            else if(st.top().first==s[i])
            {
                if(st.top().second==k-1)
                {
                    st.pop();
                }
                else{
                    st.top().second++;
                }
            }else{
                st.push({s[i],1});
            }
        }
        string s2="";
        while(!st.empty())
        {
            while(st.top().second--)
            {
                s2+=st.top().first;
                
            }
            st.pop();
        }
        reverse(s2.begin(),s2.end());
        return s2;
    }


};

//{ Driver Code Starts.

int main() {
    
    
    int t;cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.Reduced_String(k,s)<<"\n";
        
    }
    
	return 0;
}
// } Driver Code Ends