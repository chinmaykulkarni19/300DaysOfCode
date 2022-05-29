class Solution {
  public:
    vector<vector<int>> formCoils(int n) {
        int m=8*n*n;
        vector<int>coil1(m);
        vector<vector<int>> res;
        
        int signflag=1;
        int steps=2;
        
        coil1[0]=8*n*n+2*n;
        int curr=coil1[0];
        int index=1;
        
        while(index<m)
        {
            for(int i=0;i<steps;i++)
            {
                curr=curr-4*n*signflag;
                coil1[index]=curr;
                index++;
                if(index>=m)
                {
                    break;
                }
            }
            if(index>=m)
            {
                break;
            }
            for(int i=0;i<steps;i++)
            {
                curr=curr+signflag;
                coil1[index]=curr;
                index++;
                if(index>=m)
                {
                    break;
                }
                
            }
            signflag=signflag*-1;
            steps+=2;
        }
        vector<int>coil2(m);
        for(int i=0;i<m;i++)
        {
            coil2[i]=(16*n*n)+1-(coil1[i]);
        }
        res.push_back(coil1);
        res.push_back(coil2);
        return res;
        
    }
};