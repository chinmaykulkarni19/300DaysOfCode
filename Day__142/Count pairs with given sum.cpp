class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int,int>res;
        for(int i=0;i<n;i++)
        {
            res[arr[i]]++;
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            count+=res[k-arr[i]];
            if(k-arr[i]==arr[i])
            count--;
        }
        return count/2;
    }
    
};