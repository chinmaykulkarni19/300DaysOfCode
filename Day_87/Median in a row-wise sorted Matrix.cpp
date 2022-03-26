class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
          vector<int> qu;
for(int i=0;i<r;i++)
   for(int j=0;j<c;j++)
      qu.push_back(matrix[i][j]);
            
sort(qu.begin(),qu.end());
int temp=(r*c)/2;
return qu[temp];      
    }
};
