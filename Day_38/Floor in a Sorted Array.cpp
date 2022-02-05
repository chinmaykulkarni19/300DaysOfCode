class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        int l=0,h=n-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(v[mid]==x)
            return mid;
            else if(v[mid]<x)
            l=mid+1;
            else
            h=mid-1;
        }
        return h;
    }
};