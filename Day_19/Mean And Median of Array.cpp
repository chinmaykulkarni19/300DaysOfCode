class Solution{
    public:
    //Function to find median of the array elements.
    int median(int A[],int N)
    {
        
        sort(A,A+N);
        int num = N/2;
       if(N%2 != 0)
       return A[N/2];
      else
      {
          //num = N/2;
           return ((A[num-1] + A[num])/2);
      }
    }
    //Function to find mean of the array elements.
    int mean(int A[],int N)
    {
        int sum=0;
        for(int i=0;i<N;i++)
        sum=sum+A[i];
        return sum/N;
    }
    
};