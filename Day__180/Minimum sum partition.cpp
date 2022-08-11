class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    int sum=0;
   
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
     bool t[n+1][sum+1];
       for(int i=0;i<sum+1;i++)
           t[0][i]=false;
       for(int i=0;i<n+1;i++)
           t[i][0]=true;
       
       for(int i=1;i<n+1;i++){
           for(int j=1;j<sum+1;j++){
               if(arr[i-1]<=j){
                   t[i][j]=t[i-1][j]||t[i-1][j-arr[i-1]];
               }
               else{
                   t[i][j]=t[i-1][j];
               }
           }
           
       }    
       
      int mn =INT_MAX;
   for(int i=0; i<=sum/2; i++) {
       if(t[n][i]) {
           mn = min(mn, sum-(2*i));
       }
   }
   return mn;
	} 
};