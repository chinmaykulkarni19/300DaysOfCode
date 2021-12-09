// { Driver Code Starts
//Initial Template for C++

/*-In grey code our objective is to keep the MSB unchanged and do the XOR of consecutive bits.
-So here when we do right shift , it basically adds zero to the MSB,now when whenever we do XOR of MSB with 0 we'll get the MSB unchanged(irrespective of MSB =1 or 0)
and rest code is simply doing the XOR operation of the rest of the bits.*/

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //  Function to find the gray code of given number n
    int greyConverter(int n)
    {
        
        return n^(n>>1);
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin >> n;//input n
        Solution ob;
        //calling greyConverter() function
        cout << ob.greyConverter(n) << endl;
    }
}
  // } Driver Code Ends