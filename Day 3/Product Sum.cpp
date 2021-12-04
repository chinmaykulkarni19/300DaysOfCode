// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    long long int countDigits(long long int a, long long int b)
    {
        long c, count = 0;
        c = a * b;
        while (c != 0)
        {
            c = c / 10;
            count++;
        }
        return count;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        Solution ob;
        cout << ob.countDigits(a, b) << endl;
    }
    return 0;
}
// } Driver Code Ends