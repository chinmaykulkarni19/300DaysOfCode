class Solution{
	public:
	string digitsNum(int N)
	{
	     int times9=N/9;
	     int starters=N%9;
	     string ans="";
	     if(starters!=0)
	     {
	         ans+=to_string(starters);
	     }
	     for(int i=0;i<times9;i++)
	     {
	         ans+="9";
	     }
	     for(int i=0;i<N;i++)
	     {
	         ans+="0";
	     }
	     return ans;
	}
};