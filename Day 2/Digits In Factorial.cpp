// { Driver Code Starts
// Initial Template for C++

// REFER YOUTUBE VIDEO https://www.youtube.com/watch?v=Ig6ck6MM2NU

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int digitsInFactorial(int N)
    {
        double logval = 0;
        for (int i = 1; i <= N; i++)
        {
            logval = logval + log10(i);
        }
        return floor(logval) + 1;
    }
};

// { Driver Code Starts.

int main()
{
    int T;

    // taking testcases
    cin >> T;
    while (T--)
    {
        int N;

        // taking N
        cin >> N;
        Solution ob;
        // calling method digitsInFactorial()
        cout << ob.digitsInFactorial(N) << endl;
    }
    return 0;
}
// } Driver Code Ends