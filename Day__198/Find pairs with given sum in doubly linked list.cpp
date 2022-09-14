class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        unordered_map<int,int>res;
        vector<pair<int,int>>ans;
        Node *start=head;
        while(start!=NULL)
        {
            res[start->data]++;
            start=start->next;
        }
        Node *restart=head;
        while(restart!=NULL)
        {
            if(res.find(target-restart->data)!=res.end() && restart->data!=target-restart->data)
            {
                ans.push_back({restart->data,target-restart->data});
                res.erase(restart->data);
            }
            restart=restart->next;
        }
        return ans;
    }
};