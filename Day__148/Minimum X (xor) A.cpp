class Solution {
  public:
    int minVal(int a, int b) {
        int countbetsetinb;
        int B=b;
        while(B)
        {
            countbetsetinb+=B%2;
            B=B/2;
        }
        int noofbitstosetinx=countbetsetinb;
        int ans=0;
        for(int i=31;i>=0 && noofbitstosetinx;i--)
        {
            if(a&(1<<i))
            {
                ans|=(1<<i);
                noofbitstosetinx--;
            }
        }
        for(int i=0;i<=31 && noofbitstosetinx;i++)
        {
            if((ans&(1<<i))==0)
            {
                ans|=(1<<i);
                noofbitstosetinx--;
            }
        }
        return ans;
    }
};