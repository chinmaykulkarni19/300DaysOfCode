// { Driver Code Starts
//Initial Template for C++

/*A number has three divisor only if it a perfect square of a prime number i.e. 4,9,25 etc*/
//VVVVV IMP
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool isprime(int i)
    {
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            return false;
        }
        return true;
    }
    int exactly3Divisors(int N)
    {
        int count=0;
        for(int i=2;i*i<=N;i++)
        {
            if(isprime(i))
            count++;
        }
        return count;
    }
};

// { Driver Code Starts.


int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling function exactly3Divisors()
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends