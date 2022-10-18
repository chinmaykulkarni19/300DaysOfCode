//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int N, vector<vector<int>> A)
	{
		vector<int>res;
		for(int j=0;j<N;j++)
		{
		    int a=0;
		    int b=j;
		    while(a<N && b>=0)
		    {
		        res.push_back(A[a][b]);
		        a++;
		        b--;
		    }
		    
		}
		for(int i=1;i<N;i++)
		{
		    int a=i;
		    int b=N-1;
		    while(a<N && b>=0)
		    {
		        res.push_back(A[a][b]);
		        a++;
		        b--;
		    }
		}
		return res;
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends