// { Driver Code Starts
// Initial Template for C++

// https://www.youtube.com/watch?v=GbH8PcqKosk

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
        int masko = 0xAAAAAAAA;
        int maske = 0x55555555;
        int ans0 = (masko & n);
        int anse = (maske & n);
        int ans = ((ans0 >> 1) | (anse << 1));
        return ans;
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
    int t;
    Solution ob;
    // calling swapBits() method
    cout << ob.swapB
                cin >>
        t; // testcases
    while (t--)
    {
        unsigned int n;
        cin >> n; // input n
        its(n) << endl;
    }
    return 0;
} // } Driver Code Ends