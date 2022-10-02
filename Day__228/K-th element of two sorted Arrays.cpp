int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        vector<int>res(n+m);
        int i=0,j=0,index=0;
        while(i<n && j<m)
        {
            if(arr1[i]<=arr2[j])
            {
                res[index]=arr1[i];
                index++;
                i++;
            }else
            {
                res[index]=arr2[j];
                j++;
                index++;
            }
        }
        while(i<n)
        {
            res[index]=arr1[i];
                index++;
                i++;
        }
        while(j<m)
        {
            res[index]=arr2[j];
                j++;
                index++;
        }
        return res[k-1];
    }