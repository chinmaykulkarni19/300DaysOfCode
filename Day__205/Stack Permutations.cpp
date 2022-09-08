class Solution{
public:
    int isStackPermutation(int N,vector<int> &A,vector<int> &B){
        stack<int>res;
        int i=0,j=0;
        while(i<N and j<N)
        {
            if(A[i]!=B[j])
            {
                res.push(A[i]);
                i++;
            }
            else
            {
                res.push(A[i]);
                i++;
                while(!res.empty() && res.top()==B[j])
                {
                    res.pop();
                    j++;
                }
            }
        }
        return res.empty();
    }
};