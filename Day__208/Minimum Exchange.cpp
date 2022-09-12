
class Solution {
public:
int MinimumExchange(vector<vector<char>>matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    char var;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            var='A';
        }
        else{
            var='B';
        }
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]!=var)
            {
                count++;
            }
            if(var=='A')
            {
                var='B';
            }
            else
            {
                var='A';
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            var='B';
        }
        else
        {
            var='A';
        }
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]!=var)
            {
                ans++;
            }
            if(var=='A')
            {
                var='B';
            }
            else{
                var='A';
            }
        }
    }
    return min(count,ans);
}

};