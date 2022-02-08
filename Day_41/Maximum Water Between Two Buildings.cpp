class Solution
{
    public:
    //Function to return the maximum water that can be stored.
    int maxWater(int height[], int n) 
    { 
        int res=0,count=0;
        int l=0,h=n-1;
        while(l<h){
            res=min(height[l],height[h])*(h-l-1);
            count=max(res,count);
            if(height[l]<height[h])
            l++;
            else
            h--;
        }
        return count;
    } 
};