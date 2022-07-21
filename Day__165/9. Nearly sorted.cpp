class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int K){
        priority_queue<int,vector<int>,greater<int>>q;
        vector<int>v;
        for(int i=0;i<K;i++)
        {
            q.push(arr[i]);
        }
        for(int i=K;i<num;i++)
        {
            if(arr[i]>q.top())
            {
                v.push_back(q.top());
                q.pop();
            }
            q.push(arr[i]);
        }
        while(!q.empty())
        {
            v.push_back(q.top());
            q.pop();
        }
        return v;
    }
};