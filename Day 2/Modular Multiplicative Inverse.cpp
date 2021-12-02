// { Driver Code Starts
// Initial Template for C++

// REFER https://www.youtube.com/watch?v=Gd9w8m-klho

#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Complete this function
    int modInverse(int a, int m)
    {
        for (int i = 1; i < m; i++)
        {
            if ((a * i) % m == 1)
                return i;
        }
        return -1;
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
        int a, m;

        // taking input a and m
        cin >> a >> m;
        Solution ob;
        // calling function modInverse()
        cout << ob.modInverse(a, m) << endl;
    }
    return 0;
} // } Driver Code Ends