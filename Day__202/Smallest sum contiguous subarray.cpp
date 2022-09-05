class Solution{
  public:
  int smallestSumSubarray(vector<int>& a){
      int res=a[0];
      int minending=a[0];
      for(int i=1;i<a.size();i++)
      {
          minending=min(minending+a[i],a[i]);
          res=min(res,minending);
      }
      return res;
  }
};