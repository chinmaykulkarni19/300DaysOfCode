//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long numOfWays(int n, int m);

int main() {
    // code
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        cout << numOfWays(n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


//Function to find out the number of ways we can place a black and a 
//white Knight on this chessboard such that they cannot attack each other.
bool isval(int N,int M,int i,int j)
{
    if(i<0 || j<0 || i>=N || j>=M)
    {
        return false;
    }
    return true;
}
long long numOfWays(int N, int M)
{
    // write code here
    long long mod = 1e9 + 7;
    long long total=N*M;
    long long ans=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            int count=0;
            if(isval(N,M,i-2,j-1)) //1
            {
                count++;
            }
            if(isval(N,M,i-1,j-2)) //4
            {
                count++;
            }
            if(isval(N,M,i+1,j-2)) //3
            {
                count++;
            }
            if(isval(N,M,i+2,j-1)) //5
            {
                count++;
            }
            if(isval(N,M,i-2,j+1)) //2
            {
                count++;
            }
            if(isval(N,M,i-1,j+2))  //7
            {
                count++;
            }
            if(isval(N,M,i+1,j+2))
            {
                count++;
            }
            if(isval(N,M,i+2,j+1)) //6
            {
                count++;
            }
            ans = (ans%mod + (total%mod - count%mod - 1%mod)%mod)%mod;
        }
    }
    return ans;
}