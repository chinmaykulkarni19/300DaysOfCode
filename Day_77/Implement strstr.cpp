int strstr(string s, string x)
{
     int n=s.size();
     int m=x.size();
     for(int i=0;i<n;i++)
     {
         if(s.substr(i,m)==x)
         return i;
     }
     return -1;
}