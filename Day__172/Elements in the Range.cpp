class Solution{
	
	
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
		unordered_map<int,int>res;
		for(int i=0;i<n;i++)
		{
		    res[arr[i]]++;
		}
		for(int i=A;i<=B;i++)
		{
		    if(res[i]==0)
		    {
		        return false;
		    }
		}
		return true;
	}


		 

};