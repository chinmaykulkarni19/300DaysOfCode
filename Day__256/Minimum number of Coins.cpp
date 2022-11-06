vector<int> minPartition(int N)
    {
        int notes[10]={1,2,5,10,20,50,100,200,500,2000};
        vector<int>res;
        for(int i=9;i>=0;i--)
        {
            while(N>=notes[i])
            {
                N-=notes[i];
                res.push_back(notes[i]);
            }
        }
        return res;
    }