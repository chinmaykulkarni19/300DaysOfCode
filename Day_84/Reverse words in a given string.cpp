class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        
       int start=0;
       for(int i=0; i<=S.size(); i++){
           if(S[i] == '.' || i == (S.size())){
               reverse(S.begin()+start, S.begin()+i);
               start = i+1;
           }
       }
       reverse(S.begin(), S.end());
       return S;
    } 
};