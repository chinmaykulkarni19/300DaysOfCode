class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        int low=0;
        int high=a.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
            {
                return a[mid];
            }
            else if(a[mid]>=a[mid-1] && a[mid]<=a[mid+1])
            {
                low=mid+1;
            }
            else if(a[mid]<=a[mid-1] && a[mid]>=a[mid+1])
            {
                high=mid-1;
            }
        }
    }
};