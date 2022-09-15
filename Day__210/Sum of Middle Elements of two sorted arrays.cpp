
vector<int>res;
            int i=0;
            int j=0;
            while(i<n && j<n)
            {
                if(ar1[i]<=ar2[j])
                {
                    res.push_back(ar1[i]);
                    i++;
                }
                else
                {
                    res.push_back(ar2[j]);
                    j++;
                }
                
            }
            while(i<n)
            {
                res.push_back(ar1[i]);
                    i++;
            }
            while(j<n)
            {
                res.push_back(ar2[j]);
                    j++;
            }
            int t=(n+n)/2;

vector<int>res;
            int i=0;
            int j=0;
            while(i<n && j<n)
            {
                if(ar1[i]<=ar2[j])
                {
                    res.push_back(ar1[i]);
                    i++;
                }
                else
                {
                    res.push_back(ar2[j]);
                    j++;
                }
                
            }
            while(i<n)
            {
                res.push_back(ar1[i]);
                    i++;
            }
            while(j<n)
            {
                res.push_back(ar2[j]);
                    j++;
            }
            int t=(n+n)/2;

            return res[t]+res[t-1];