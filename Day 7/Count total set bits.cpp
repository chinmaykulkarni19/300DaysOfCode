// { Driver Code Starts
// Initial Template for C++

/* find highest perfect power of 2 which is less than  given N. lets that power came to be x, so from 1 to (2^x )- 1 total set bits will be (2^(x-1)) * x. and from 2^x to N number of set bit will be (N-2^x  +1) + recursive call to sol(N-2^x);
if given number is N =11,
x will be 3 because, 2^3=8<11. now
(2^(x-1)) * x=12 and (N-2^x  +1)=4 and sol(3) pr recursive call.*/

// https://www.youtube.com/watch?v=g6OxU-hRGtY

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // n: input to count the number of set bits
    // Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        int ans = 0;

        if (n <= 0)
            return ans;
        int x = find(n);

        ans = ((1 << (x - 1)) * x) + (n - (1 << x) + 1) + countSetBits(n - (1 << x));
        return ans;
    }
    int find(int n)
    {
        int x = 0;
        while ((1 << x) <= n)
            x++;

        return x != 0 ? x - 1 : x;
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin >> t;   // input testcases
    while (t--) // while testcases exist
    {
        int n;
        cin >> n; // input n
        Solution ob;
        cout << ob.countSetBits(n) << endl; // print the answer
    }
    return 0;
}
// } Driver Code Ends