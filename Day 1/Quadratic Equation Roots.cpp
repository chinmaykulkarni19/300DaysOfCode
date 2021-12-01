// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        vector<int> res;
        double D;
        double r1,r2;
        D = (b*b) - (4*a*c);
        if(D>=0){
        r1=(-b+sqrt(D))/(2*a);
        r2=(-b-sqrt(D))/(2*a);
        r1=floor(r1);
        r2=floor(r2);
        res.push_back(max(r1,r2));
        res.push_back(min(r1,r2));
    }else{
        res.push_back(-1);
    }
            
    return res;
}
};

// { Driver Code Starts.

int main() {
   int T ;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends