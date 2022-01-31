class Solution{
    public:
    // Function to count number of Ones
    // arr: input array 
    // N: size of input array
    int countOnes(int arr[], int N)
    {
        int low=0,high=N-1;
       while(low<=high){
           int mid=(high+low)/2;
           if(arr[mid]==1 && arr[mid+1]==0)return mid+1;
          if(arr[mid]<1) high=mid-1;
           else low=mid+1;
    }
    }
};