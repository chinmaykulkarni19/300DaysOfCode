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
    int sumOfDigits(int n)
    {
        if (n < 10)
            return n;

        return sumOfDigits(n / 10) + n % 10;
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
        int n;

        // taking input n
        cin >> n;

        // calling method sumOfDigits()
        Solution obj;
        cout << obj.sumOfDigits(n) << endl;
    }
    return 0;
} // } Driver Code Ends