vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        //IF WE CONSIDER THE FIRST EXAMPLE AND IF WE DO XOR OF EACH AND EVERY ELEMENT IN ARR WE WILL GET
        //100 AS ANSWER,THIS MEANS HERE 5 IS 101 AND 1 IS 001. WE HAVE TO MAKE GROUPS FOR THE FIRST
        //SET BIT
        int x=0;
        for(int i=0;i<N;i++)
        {
            x=x^Arr[i];
        }
        //step 2 find First set bit
        int set=x & ~(x-1); //FORMULA FOR FINDING FIRST SET BIT
        int f=0;
        int s=0;
        for(int i=0;i<N;i++)
        {
            if(set & Arr[i])
            {
                f=f^Arr[i];
            }
            else{
                s=s^Arr[i];
            }
        }
        if(f>=s)
        {
            return {f,s};
        }
        else{
            return {s,f};
        }
    }