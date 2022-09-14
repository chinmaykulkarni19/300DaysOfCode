class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        vector<int>a;
        vector<int>b;
        for(int i=0;i<n;i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                a.push_back(str[i]-'a');
                str[i]='1';
            }
            else
            {
                b.push_back(str[i]-'a');
                str[i]='2';
            }
        }
        int j=0,k=0;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++)
        {
            if(str[i]=='1')
            {
                str[i]=a[j]+'a';
                j++;
            }
            else
            {
                str[i]=b[k]+'a';
                k++;
            }
        }
        return str;
    }
};