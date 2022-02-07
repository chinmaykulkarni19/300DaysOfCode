class Solution
{
    public:
    //Function to find maximum number of consecutive steps 
    //to gain an increase in altitude with each step.
    int maxStep(int A[], int N)
    {
       int res=0,count=0;
       for(int i=0;i<N-1;i++)
       {
           if(A[i+1]>A[i])
           count++;
           else{
               count=0;
           }
           
           res=max(res,count);
       }
       return res;
       
    }
};