class Solution{
public:	
	int search(int A[], int N){
	    int low=0;
	    int high=N-1;
	    int mid;
	    
	    if(high==0)
	    return A[0];
	    else if(A[0]!=A[1])
	    return A[low];
	    else if(A[high]!=A[high-1])
	    return A[high];
	    while(low<=high)
	    {
	        mid=(low+high)/2;
	        if(A[mid]!=A[mid-1] && A[mid]!=A[mid+1])
	        return A[mid];
	        if(((mid%2)==0 && A[mid]==A[mid+1]) || (mid%2)==1 && A[mid]==A[mid-1])
	        low=mid+1;
	        else
	        high=mid-1;
	    }
	    return -1;
	}
};