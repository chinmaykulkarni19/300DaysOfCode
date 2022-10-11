//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        stack<char> st;
       string ans;
       for(int i=0;i<s.size();i++)
       {
           if(s[i]!=']')
           {
               //agar closing bracket naa ho tho push karo
               st.push(s[i]);
           }
           else
           {
               //agar closing ho tho phele string nikalao
               string temp="";
               while(st.top()!='[')
               {
                   temp+=st.top();
                   st.pop();
               }
               st.pop();
               reverse(temp.begin(),temp.end());
               //ab number nikaro taaki usko repeat karwa sake
               string x = "";
               while(!st.empty() && isdigit(st.top())){
                   x += st.top();
                   st.pop();
               }
               reverse(x.begin(),x.end());
               int num=stoi(x);
               string temp2="";
               //uthne times add karo string ko 
               while(num--)
               {
                   temp2+=temp;
               }
               //end mai usko stack mai daal do taaki usme future operation ho sake
               for(int i=0;i<temp2.size();i++)
               {
                   st.push(temp2[i]);
               }
           }
       }
       //stack will have final string so lets fetch it.
       while(!st.empty())
       {
           ans+=st.top();
           st.pop();
       }
       //reverse it as stack gives opposite string.
       reverse(ans.begin(),ans.end());
       return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends