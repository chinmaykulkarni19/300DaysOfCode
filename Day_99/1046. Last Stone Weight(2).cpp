class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>us;
        for(int i=0;i<stones.size();i++)
        {
            us.push(stones[i]);
        }
        while(us.size()!=1)
        {
            int y=us.top();
            us.pop();
            int x=us.top();
            us.pop();
            us.push(y-x);
        }
        return us.top();
    }
};