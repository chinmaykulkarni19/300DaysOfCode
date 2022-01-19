class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        for(int i=0;i<n;i=i+k)
        {
            int start=i;
            int end=min(i+k-1,n-1);
            while(start<end)
            {
                int temp=arr[start];
                arr[start]=arr[end];
                arr[end]=temp;
                start++;
                end--;
            }
        }
    }
};