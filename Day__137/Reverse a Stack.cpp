class Solution{
public:
    vector<int> Reverse(stack<int> St){
        vector<int>res;
        while(!St.empty())
        {
            res.push_back(St.top());
            St.pop();
        }
        return res;
    }
};