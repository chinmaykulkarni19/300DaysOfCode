class Solution{
public:

void rearrange(int arr[], int n) {
    // code here
    vector<int> positive,negetive;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
          negetive.push_back(arr[i]);
         else
           positive.push_back(arr[i]);
    }
    int i=0,j=0,k=0;
    while(i<negetive.size()&&j<positive.size())
    {
        arr[k++]=positive[j++];
        arr[k++]=negetive[i++];
        
    }
    while(j<positive.size())
    {
        arr[k++]=positive[j++];
    }
    while(i<negetive.size())
    {
        arr[k++]=negetive[i++];
    }
}    
};