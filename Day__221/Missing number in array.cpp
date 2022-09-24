class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int Xor=0;
        for(int  x:array)
        {
            Xor=Xor^x;
        }
        for(int i=0;i<=n;i++)
        {
            Xor=Xor^i;
        }
        return Xor;
    }
};