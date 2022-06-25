char* reverse(char *S, int len)
{
    stack<char>res;
    string ans;
    for(int i=0;i<len;i++)
    {
        res.push(S[i]);
    }
    for(int i=0;i<len;i++)
    {
        S[i]=res.top();
        res.pop();
    }
    return S;
}