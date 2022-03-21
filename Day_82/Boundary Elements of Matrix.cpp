class Solution {
public:
    vector<int> BoundaryElements(vector<vector<int>>&matrix){
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> res;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || i==n-1 ||j==0 || j==m-1)
                {
                    res.push_back(matrix[i][j]);
                }
            }
        }
        return res;
    }
};