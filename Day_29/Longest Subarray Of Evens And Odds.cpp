class Solution{
    public:
    //Complete this function
    //Function to find the length of longest subarray of even and odd numbers.
    int maxEvenOdd(int arr[], int n) 
    { 
       int res=1;
       int count=1;
       for(int i=1;i<n;i++)
       {
           if((arr[i]%2==0 && arr[i-1]%2!=0)  || (arr[i]%2!=0 && arr[i-1]%2==0))
           {
               count++;
               res=max(res,count);
           }
           else
           count=1;
       }
       return res;
    } 
};