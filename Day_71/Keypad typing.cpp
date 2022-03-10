string printNumber(string s, int n) 
{
    char arr[]="22233344455566677778889999";
    string res;
    for(int i=0;i<n;i++)
    {
        res=res+arr[s[i]-'a'];
    }
    return res;
}