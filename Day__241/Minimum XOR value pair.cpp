class Solution{   
public:
    int minxorpair(int N, int arr[]){   
        sort(arr,arr+N);
        int ans=INT_MAX;
        for(int i=0;i<N-1;i++)
        {
            ans=min(ans,(arr[i]^arr[i+1]));
        }
        return ans;
    }
};