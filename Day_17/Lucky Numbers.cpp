// { Driver Code Starts
//Initial Template for C++

//https://www.youtube.com/watch?v=eUiLzMPRamM

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User-function template for C++

// Complete the function
// n: Input n
// Return True if the given number is a lucky number else return False

class Solution{
public:
    int counter=2;
    int np;
    bool isLucky(int n) {
        
        if(n%counter==0){
        return 0;}
        if(counter>n){
        return 1;}
        
        np=n;
        np=np-np/counter;
        counter++;
        return isLucky(np);
    }
};

// { Driver Code Starts.
signed main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        Solution obj;
        //calling isLucky() function
        if(obj.isLucky(n))
            cout<<"1\n";//printing "1" if isLucky() returns true
        else
            cout<<"0\n";//printing "0" if isLucky() returns false
    }
    
}  // } Driver Code Ends