class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
       int j=0;
       for(int i=0;i<N;i++)
       {
           if(A[i]==0)
           {
               swap(A[i],A[j]);
           j++;
           }
           
       }
    }
};