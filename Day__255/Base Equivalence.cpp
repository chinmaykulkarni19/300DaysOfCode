string baseEquiv(int n, int m){
        for(int i=2;i<=32;i++)
        {
            int count=0;
            int curr=n;
            while(curr!=0)
            {
                count++;
                curr=curr/i;
                if(count>m)
                {
                    break;
                }
            }
            if(count==m)
            {
                return "Yes";
            }
        }
        return "No";
    }