class Solution{
public:	
	int search(int A[], int N){
	    //code
	    for(int i=1;i<N;i++)
	    {
	        A[0]=A[0]^A[i];
	    }
	    return A[0];
	}
};