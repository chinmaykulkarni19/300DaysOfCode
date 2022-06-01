class Solution{
public:
    int count=0,a,b;
    void TOH(int N,int n,int from,int to,int aux)
    {
        if(N==0)
        {
            return;
        }
        TOH(N-1,n,from,aux,to);
        count+=1;
        if(count==n)
        {
            a=from;
            b=to;
        }
        TOH(N-1,n,aux,to,from);
    }
    
    
    
    
    vector<int> shiftPile(int N, int n){
        a=0,b=0;
        TOH(N,n,1,3,2);
        return{a,b};
        
    }
};