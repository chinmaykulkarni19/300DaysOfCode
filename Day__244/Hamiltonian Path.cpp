bool check(int N,int M,vector<vector<int>> Edges)
    {
        // code here
        map<int,vector<int>> mp;
        for(int i = 0;i<Edges.size();i++){
            //storing nodes in adjacency list form
            int u = Edges[i][0];
            int v = Edges[i][1];
            mp[u].push_back(v);
            mp[v].push_back(u);
        }
        
        vector<bool> vis(mp.size()+1,false); //visited array for checking visited nodes
        
        for(int i = 1;i<=mp.size();i++){ //loop for every node in the graph
            int count = 1; //number of visited nodes
            if(dfs(i,mp,vis,count))
                return true;
        }
        return false;
    }
    bool dfs(int i,map<int,vector<int>> &mp,vector<bool> &vis, int count){
        if(count==mp.size()) //traverse every node of the path
            return true;
        vis[i] = true; //marking node as visited
        for(auto &it: mp[i]){ //going for unvisited adjacent nodes
            if(vis[it]==false){
                if(dfs(it,mp,vis,count+1))
                    return true;
            }
        }
        vis[i] = false; //marking node as unvisited
        return false; 
    }