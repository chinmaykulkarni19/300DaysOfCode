class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    static bool ismatching(char a ,char b)
    {
         if((a=='{' && b=='}') || (a=='(' && b==')') || (a=='[' && b==']'))
         {
             return true;
         }
         else
         {
             return false;
         }
    }
    bool ispar(string x)
    {
       stack<char>res;
       for(int i=0;i<x.length();i++)
       {
           if(x[i]=='{' || x[i]=='(' || x[i]=='[')
           {
               res.push(x[i]);
           }
           else
           {
               if(res.empty())
               {
                   return false;
               }
               else if(ismatching(res.top(),x[i])==false)
               {
                   return false;
               }
               else
               {
                   res.pop();
               }
           }
           
       }
       return (res.empty()==true);
    }

};