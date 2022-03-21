class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {   
        int index=0;
        int max_count=0;
            for(int i=0;i<N;i++)
            {   int count=0;
                for(int j=0;j<M;j++)
                {
                    if(Mat[i][j]==1)
                    count++;
                    
                }
                if(count>max_count)
                {
                    max_count=count;
                    index=i;
                }
                
            }
            return index;
        }
};