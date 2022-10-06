int power(int n,int k)
  {
      int a=log2(n);
      if(pow(2,a)==n)
      {
          return k=k/2;
      }
      else{
          return k=k*2;
      }
  }
    string lexicographicallySmallest(string S, int k) {
        int n=S.size();
        k=power(n,k);
        string str="";
        stack<char>st;
        if(k>=n)

        {

            return "-1";

        }
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && k>0 && st.top()>S[i])
            {
            st.pop();
            k--;
            }
            st.push(S[i]);
        }
        while(!st.empty() && k>0)
        {
            st.pop();
            k--;
        }
        while(!st.empty())
        {
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }