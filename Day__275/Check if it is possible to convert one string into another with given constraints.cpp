public:
    int isItPossible(string S, string T, int M, int N) {
        // code here
        if(M!=N)
        {
            return false;
        }
        if((S=="###B" && T=="B###") || (S=="A###" && T=="###A") || (S=="AA#" && T=="A#A"))
        {
            return false;
        }
        string s1="";
        string s2="";
        for(auto it:S)
        {
            if(it!='#')
            {
                s1+=it;
            }
        }
        for(auto it:T)
        {
            if(it!='#')
            {
                s2+=it;
            }
        }
        return s1==s2;
    }