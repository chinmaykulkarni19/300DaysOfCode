// { Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Complete this function
    int digitalRoot(int n)
    {
        int res;
        if (n < 10)
            return n;

        else
            res = n % 10 + digitalRoot(n / 10);
        if (res < 10)
            return res;

        else
            return digitalRoot(res / 10) + res % 10;
    }
};

// { Driver Code Starts.

int main()
{
    int T;
    cin >> T; // taking testcases
    while (T--)
    {
        int n;
        cin >> n; // taking number n

        // calling digitalRoot() function
        Solution obj;
        cout << obj.digitalRoot(n) << endl;
    }
    return 0;
} // } Driver Code Ends