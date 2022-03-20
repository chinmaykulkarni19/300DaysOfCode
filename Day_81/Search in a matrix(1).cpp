int matSearch (int N, int M, int matrix[][M], int x)
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(matrix[i][j]==x)
            return 1;
        }
    }
    return 0;
}