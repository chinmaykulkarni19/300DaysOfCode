class Solution {
public:
    int minimumCostOfBreaking(vector<int> X, vector<int> Y, int M, int N){
        sort(X.begin(),X.end());
        sort(Y.begin(),Y.end());
        int a=X.size()-1;
        int b=Y.size()-1;
        int cost=0;
        int h=1;
        int v=1;
        while(a>=0 && b>=0)
        {
            if(X[a]<=Y[b])
            {
                cost+=Y[b]*h;
                b--;
                v++;
            }
            else
            {
                cost+=X[a]*v;
                h++;
                a--;
            }
        }
        while(a>=0)
        {
            cost+=X[a]*v;
                h++;
                a--;
        }
        while(b>=0)
        {
            cost+=Y[b]*h;
                b--;
                v++;
        }
        return cost;
    }
};