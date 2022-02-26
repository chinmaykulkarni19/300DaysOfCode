class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        unordered_set<int> us;
        for(int i=0;i<n;i++)
        {
            us.insert(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            us.insert(b[i]);
        }
        return us.size();
    }
};