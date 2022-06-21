class Solution {
  public:
    int count(int N,vector<vector<int>> A,vector<vector<int>> B) {
        int count10=0;
        int count01=0;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(A[i][j]!=B[i][j])
                {
                    if(A[i][j]==1)
                    count10++;
                    else
                    count01++;
                }
            }
        }
        if(count10==count01)
        {
            return count10;
        }
        return -1;
    }   
};