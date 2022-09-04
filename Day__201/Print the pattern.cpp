class Solution{
public:
    vector<string> pattern(int n){
        vector<string>res;
        int x=1;
        int y=n*(n+1);
        for(int i=0;i<n;i++)
        {
            string str="";
            for(int j=0;j<2*i;j++)
            {
                str+='-';
            }
            int k=n-i;
            while(k)
            {
                str+=to_string(x);
                str+='*';
                k--;
                x++;
            }
            k=n-i;
            int num=y-n+1;
            while(k)
            {
                if(k==1)
                {
                    str+=to_string(num);
                    k--;
                    num++;
                }
                else
                {
                    str+=to_string(num);
                    str+='*';
                    num++;
                    k--;
                }
                y--;
            }
            y++;
            res.push_back(str);
        }
        return res;
    }
};