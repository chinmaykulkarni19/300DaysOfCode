ector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
        int left=0;//for col
        int right=C-1;//for col
        int top=0;//for row
        int bottom=R-1;//for row
        vector<int>ans;
        while(left<=right && top<=bottom)
        {
            for(int i=left;i<=right;i++)
            {
                ans.push_back(a[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                ans.push_back(a[i][right]);
            }
            right--;
            if(top<=bottom)
            {
                for(int i=right;i>=left;i--)
                {
                    ans.push_back(a[bottom][i]);
                }
                bottom--;
                
            }
            if(left<=right)
            {
                for(int i=bottom;i>=top;i--)
                {
                    ans.push_back(a[i][left]);
                }
                left++;
            }
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }