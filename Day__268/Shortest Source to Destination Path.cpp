public:
  int dx[4]={1,-1,0,0};
  int dy[4]={0,0,-1,1};
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
        if(A[0][0]==0)
        return -1;
        queue<pair<int,int>>q;
        q.push({0,0});
        int count=0;
        A[0][0]=0;
        while(!q.empty())
        {
            int t=q.size();
            for(int i=0;i<t;i++)
            {
                auto it=q.front();
                q.pop();
                int x=it.first;
                int y=it.second;
                if(x==X && y==Y)
                {
                    return count;
                }
                for(int j=0;j<4;j++)
                {
                    int r=x+dx[j];
                    int c=y+dy[j];
                    
                    if(r>=0 && c>=0 && r<N && c<M && A[r][c]==1)
                    {
                        A[r][c]=0;
                        q.push({r,c});
                    }
                }
            }
            count++;
            
        }
        return -1;
    }