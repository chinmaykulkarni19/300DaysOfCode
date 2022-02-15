class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            int l=0,h=n-1;
            while(l<h)
            {
                swap(matrix[l][i],matrix[h][i]);
                l++;
                h--;
            }
        }
        
    } 
};