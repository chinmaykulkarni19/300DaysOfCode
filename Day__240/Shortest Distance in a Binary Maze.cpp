int n=grid.size();

                         int m=grid[0].size();

                         vector<vector<int>>vis(n, vector<int>(m, 0));

                         queue<pair<pair<int, int>, int>>q;

                         int ans=INT_MAX;

                        int i= source.first;

                        int j=source.second;

                        int dr=destination.first;

                        int dc=destination.second;

                         q.push({{i, j}, 0});

                         vis[i][j]=1;

                         while(!q.empty()){

                             int i1=q.front().first.first;

                             int j1=q.front().first.second;

                             int t1=q.front().second;

                             if(i1==dr && j1==dc)

                             return t1;

                             q.pop();

                             int drr[]={-1, 0, 1, 0};

                             int dcc[]={0, 1, 0, -1};

                             

                             for(int k=0;k<4;k++){

                                int nr=i1+drr[k];

                                int nc=j1+dcc[k];

                                if(nr<n && nr>=0 && nc<m && nc>=0 && !vis[nr][nc] && grid[nr][nc]==1)

                                {

                                    q.push({{nr, nc}, t1+1});

                                    vis[nr][nc]=1;

                                   

                                    

                                    

                                }

                             }

                             

                         }

                        

                         return -1;

                         return ans;