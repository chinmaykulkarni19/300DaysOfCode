#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// REFER https://www.youtube.com/watch?v=RCq5TYMZEwg

class Solution
{
public:
    long long sumUnderModulo(long long a, long long b)
    {
        long long M = 1000000007;
        return (a % M + b % M) % M;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long a;
        long long b;
        cin >> a >> b;
        Solution ob;
        cout << ob.sumUnderModulo(a, b) << endl;
    }
    return 0;
} // } Driver Code Ends