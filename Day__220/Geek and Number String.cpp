class Solution{
public:
    bool issame(string str)
    {
        if(str=="21" || str=="12" || str=="34" || str=="43" || str=="56" || str=="65" || str=="78" || str=="87" || str=="09" || str=="90") 
        {
            return true;
        }
        return false;
    }
    int minLength(string s, int n) {
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            if(st.empty()==false)
            {
                string str="";
                str+=st.top();
                str+=s[i];
                
                if(issame(str)==true)
                {
                    st.pop();
                    continue;
                }
            }
            st.push(s[i]);
        }
        return st.size();
    } 
};